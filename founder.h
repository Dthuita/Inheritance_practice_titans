

#ifndef AOT
#define AOT
// holds prototype for all titans
// what to include

#include <iostream>

namespace aot_inhertance
{
    class founder
    {
        const int CURSE_OF_YMIR = 13;

    public:
        //////CONSTRUCTOR//////
        founder(std::string name, bool init_royal_blood = 0, bool init_shifter = 1, int init_lifespan = 0);

        //////METHODS//////
        void regen();       // base_health back to normal (100)
        void harden_skin(); // plus 50 health must be transformed
        void transform();   // base_health increased by 1000*titan_form
        void heal();
        void set_health(int h);
        void control_other_titans();

        //////MEMBER CONSTANTS/////
        bool is_shifter() const;
        bool get_in_titan_form() const;
        bool get_royal_blood() const;
        int current_health() const;
        int get_lifespan() const;

    private:
        std::string user_name;
        bool shifter, royal_blood;
        bool in_titan_form;
        int base_health; // base human health
        int lifespan;
    };
    class pure_titan : private founder
    {
        //////CONSTRUCTOR//////
        pure_titan(std::string name, int init_royal_blood = false);

        // should not use hardend_skin

        // can regen and transform only once
        // transform must be overridden // can only transform once
        void transform();
    };
    class attack_titan : private founder
    {
        //////CONSTRUCTOR//////
        attack_titan(std::string name, int init_royal_blood = false);

        // can regen, transform, harden_skin
        void transform();

        // can see future and talk to past
        void see_future();
        void talk_to_past();
    };
    class colossal_titan : private founder
    {
        //////CONSTRUCTOR//////
        colossal_titan(std::string name, int init_royal_blood = false) : founder(name, init_royal_blood, 1, 0) {}

        // can regen, harden_skin

        // transform goes boom
        void transform();
    };

}

#endif
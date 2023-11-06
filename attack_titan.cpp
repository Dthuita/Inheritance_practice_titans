
#include <iostream>
#include "founder.h"

namespace aot_inhertance
{
    // private:
    //     std::string user_name;
    //     bool shifter, royal_blood;
    //     bool in_titan_form;
    //     int base_health; // base human health
    //     int lifespan;
    //////METHODS//////

    //////CONSTRUCTOR////// inside of header

    attack_titan::attack_titan(std::string name, int init_royal_blood = false) : founder(name, init_royal_blood, 1, 0)
    {
        std::cout << "I'm the attack titan. I'm out here like that" << std::endl;
    }

    // should not use hardend_skin --> how to make it exculsive

    // can regen and transform only once
    // transform must be overridden // can only transform once
    void attack_titan::transform()
    {
        founder::transform(); // change titan form

        if (get_in_titan_form())
            set_health(5000);
        else
            regen();
    }
    void founder::control_other_titans()
    {
        if (get_royal_blood())
            std::cout << "you now have partial control of titans" << std::endl;
        else
            std::cout << "you don't have control of any titans" << std::endl;
    }
    void see_future()
    {
        std::cout << "the future is clear. eldians must live on" << std::endl;
    }
    void talk_to_past()
    {
        std::cout << "the past is muddied. eldians were wronged and that wrong must be righted." << std::endl;
    }
}
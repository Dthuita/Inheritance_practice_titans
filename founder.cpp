
#include <iostream>
#include "founder.h"

namespace aot_inhertance
{
    //////CONSTRUCTOR/////
    founder::founder(std::string name, bool init_royal_blood, bool init_shifter, int init_lifespan)
    {
        shifter = init_shifter;
        royal_blood = init_royal_blood;
        user_name = name;
        base_health = 100;                                            // human health
        lifespan = init_lifespan > 0 ? init_lifespan : CURSE_OF_YMIR; // DEFAULT IS 13 YEARS
        in_titan_form = false;
    }
    //////METHODS//////
    void founder::regen()
    { // base_health back to normal (100)
        base_health = 100;
    }
    void founder::harden_skin()
    { // plus 50 health must be transformed
        if (in_titan_form)
            base_health + 50;
        else
            std::cout << "can't harden is your not a titan" << std::endl;
    }
    void founder::transform()
    { // base_health increased by 1000*titan_form
        in_titan_form = !in_titan_form;

        if (in_titan_form)
            base_health = 1000 * 5;
        else
            regen();
    }
    void founder::set_health(int h)
    {
        base_health = h;
    }
    void founder::heal()
    {
        if (in_titan_form)
            base_health += 300;
        else
            std::cout << "healing only possible for titans" << std::endl;
    }
    void founder::control_other_titans()
    {
        if (get_royal_blood())
            std::cout << "catch 22, if royal blooded and founder. you have no control" << std::endl;
    }
    //////MEMBER CONSTANTS/////
    bool founder::is_shifter() const { return shifter; }
    int founder::current_health() const { return base_health; }
    int founder::get_lifespan() const { return lifespan; }
    bool founder::get_in_titan_form() const { return in_titan_form; }
    bool founder::get_royal_blood() const { return royal_blood; }

}
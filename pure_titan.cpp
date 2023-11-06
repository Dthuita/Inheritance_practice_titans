
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
    pure_titan::pure_titan(std::string name, int init_royal_blood = false) : founder(name, init_royal_blood, 0, 2000)
    {
        transform();
        std::cout << "I am a mindless pure titan." << std::endl;
    };

    // should not use hardend_skin --> how to make it exculsive

    // can regen and transform only once
    // transform must be overridden // can only transform once
    void pure_titan::transform()
    {
        founder::transform(); // change titan form

        if (get_in_titan_form())
            set_health(1000);
        else
            regen();
    }
}
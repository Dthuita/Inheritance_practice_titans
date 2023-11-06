#include <iostream>
#include "founder.h"

using namespace std;
using namespace aot_inhertance;

int main()
{
    // founder(std::string name, bool init_royal_blood = 0, bool init_shifter = 1, int init_lifespan = 0)
    cout << "Welcome to the world of titans" << endl;

    founder ymir("founder Ymir", 0);
    attack_titan eren("Eren Yeager", 0);
    colossal_titan armin("Armin");
    pure_titan eren_mom("Eren's mom");
}

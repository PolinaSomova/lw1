

#ifndef LW1_HORSE_H
#define LW1_HORSE_H

#include <iostream>

#include "units.h"

using namespace std;



class horse : public units {

public:

    char nameH = 'H';

    units units;

    int healthH = units.healthUnit();

    int shieldH = units.armorUnit();

    int attackH = units.attackUnit();

    void printConditionH () {

        units.printHealthUnit(nameH, healthH);
        units.printArmorUnit(nameH, shieldH);
        units.printAttackUnit (nameH, attackH);

    }

};


#endif //LW1_HORSE_H

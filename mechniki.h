

#ifndef LW1_MECHNIKI_H
#define LW1_MECHNIKI_H

#include <iostream>

#include "units.h"

using namespace std;


class mechniki : public units {

public:

    char nameM = 'M';

    units units;

    int healthM = units.healthUnit();

    int shieldM = units.armorUnit();

    int attackM = units.attackUnit();

    void printConditionM () {

        units.printHealthUnit(nameM, healthM);
        units.printArmorUnit(nameM, shieldM);
        units.printAttackUnit (nameM, attackM);
    }

};


#endif //LW1_MECHNIKI_H

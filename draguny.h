
#ifndef LW1_DRAGUNY_H
#define LW1_DRAGUNY_H

#include <iostream>

#include "units.h"

using namespace std;


class draguny : public units {

public:

    char nameD = 'D';

    units units;

    int healthD = units.healthUnit();

    int shieldD = units.armorUnit();

    int attackD = units.attackUnit();

    void printConditionD () {

        units.printHealthUnit(nameD, healthD);
        units.printArmorUnit(nameD, shieldD);
        units.printAttackUnit (nameD, attackD);
    }

};


#endif //LW1_DRAGUNY_H



#ifndef LW1_GUSARY_H
#define LW1_GUSARY_H

#include <iostream>

#include "units.h"

using namespace std;


class gusary : public units {

public:

    char nameG = 'G';

    units units;

    int healthG = units.healthUnit();

    int shieldG = units.armorUnit();

    int attackG = units.attackUnit();

    void printConditionG () {

        units.printHealthUnit(nameG, healthG);
        units.printArmorUnit(nameG, shieldG);
        units.printAttackUnit (nameG, attackG);
    }

};


#endif //LW1_GUSARY_H

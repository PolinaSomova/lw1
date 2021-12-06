

#ifndef LW1_PESHIE_H
#define LW1_PESHIE_H

#include <iostream>

#include "units.h"

using namespace std;


class peshie : public units {

public:

    char nameP = 'P';

    units units;

    int healthP = units.healthUnit();

    int shieldP = units.armorUnit();

    int attackP = units.attackUnit();

    void printConditionP () {

        units.printHealthUnit(nameP, healthP);
        units.printArmorUnit(nameP, shieldP);
        units.printAttackUnit (nameP, attackP);

    }


};


#endif //LW1_PESHIE_H

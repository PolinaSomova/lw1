

#ifndef LW1_KOPEYSHIKI_H
#define LW1_KOPEYSHIKI_H

#include <iostream>

#include "units.h"

using namespace std;


class kopeyshiki : public units{

public:

    char nameK = 'K';

    units units;

    int healthK = units.healthUnit();

    int shieldK = units.armorUnit();

    int attackK = units.attackUnit();

    void printConditionK () {

        units.printHealthUnit(nameK, healthK);
        units.printArmorUnit(nameK, shieldK);
        units.printAttackUnit (nameK, attackK);

    }

};


#endif //LW1_KOPEYSHIKI_H

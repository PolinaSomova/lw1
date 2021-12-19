

#ifndef LW1_NEUTRAL_H
#define LW1_NEUTRAL_H

#include "field.h"
#include "castle.h"
#include "tower.h"
#include "diamond.h"
#include "bag.h"


using namespace std;


class neutral {

public:

    char nameObj = 'N';

    int addi;
    int addj;

    field field;

    char ** addNeutralObj (char ** arr, char nameObj) {

        addi = 1 + rand() % 12;
        addj = 1 + rand() % 12;

        for (int i = 0; i < field.rows; i++) {
            for (int j = 0; j < field.cols; j++) {
                if ( (i == addi) && (j == addj))
                arr[i][j] = nameObj;
            }
        }
        return arr;
    }


    castle castle;
    tower tower;
    diamond diamond;
    bag bag;

    void printNeutralObj (char ** arrfield) {


        addNeutralObj(arrfield, castle.nameC);
        addNeutralObj(arrfield, tower.nameT);
        addNeutralObj(arrfield, diamond.nameDiam);
        addNeutralObj(arrfield, bag.nameBag);
    }



};


#endif //LW1_NEUTRAL_H

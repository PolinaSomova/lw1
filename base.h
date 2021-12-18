

#ifndef LW1_BASE_H
#define LW1_BASE_H

#include "field.h"
#include "units.h"
#include "mechniki.h"
#include "kopeyshiki.h"
#include "peshie.h"
#include "horse.h"
#include "gusary.h"
#include "draguny.h"
#include "base.h"


using namespace std;

class base {

public:

    char nameB = 'B';

    field field;
    units units;
    mechniki mechniki;
    kopeyshiki kopeyshiki;
    peshie peshie;
    horse horse;
    gusary gusary;
    draguny draguny;

    int healthB = units.healthUnit();

    int shieldB = units.armorUnit();

    int attackB = units.attackUnit();

    int maxUnits = 6;

    void printConditionB () {

        units.printHealthUnit(nameB, healthB);
        units.printArmorUnit(nameB, shieldB);
        units.printAttackUnit (nameB, attackB);

        cout << "Max of Units = " << maxUnits << "\n\n";
    }



    char ** addBaseOnField(char ** arr) {


        int addiB = 1 + rand() % field.rows - 1;
        int addjB = 1 + rand() % field.cols - 1;

        for (int i = 0; i < field.rows; i++) {
            for (int j = 0; j < field.cols; j++) {
                if ((i == addiB) && (j == addjB) && (arr[i][j] == ' ')) {
                    arr[i][j] = nameB;
                    printConditionB();
                    }
                }
            }

        return arr;
    }



    void createBaseM (char ** arrfield) {
        field.addUnitOnField(arrfield, mechniki.nameM);
        cout << endl;
    }

    void createBaseK (char ** arrfield) {
        field.addUnitOnField(arrfield, kopeyshiki.nameK);
        cout << endl;
    }

    void createBaseP (char ** arrfield) {
        field.addUnitOnField(arrfield,peshie.nameP);
        cout << endl;
    }

    void createBaseH (char ** arrfield) {
        field.addUnitOnField(arrfield, horse.nameH);
        cout << endl;
    }

    void createBaseG (char ** arrfield) {
        field.addUnitOnField(arrfield, gusary.nameG);
        cout << endl;
    }

    void createBaseD (char ** arrfield) {
        field.addUnitOnField(arrfield, draguny.nameD);
        cout << endl;
    }

    void createUnitsOnField (char ** arrfield) {

        createBaseM (arrfield);
        createBaseK (arrfield);
        createBaseP (arrfield);
        createBaseH (arrfield);
        createBaseG (arrfield);
        createBaseD (arrfield);

        cout << endl;
        field.printCount();

    }

    void delBase (char ** arrfield) {
        field.deleteUnitOnField(arrfield, nameB);
        cout << endl;
    }

    void delBaseM (char ** arrfield) {
        field.deleteUnitOnField(arrfield, mechniki.nameM);
        cout << endl;
    }

    void delBaseK (char ** arrfield) {
        field.deleteUnitOnField(arrfield, kopeyshiki.nameK);
        cout << endl;
    }

    void delBaseP (char ** arrfield) {
        field.deleteUnitOnField(arrfield,peshie.nameP);
        cout << endl;
    }

    void delBaseH (char ** arrfield) {
        field.deleteUnitOnField(arrfield, horse.nameH);
        cout << endl;
    }

    void delBaseG (char ** arrfield) {
        field.deleteUnitOnField(arrfield, gusary.nameG);
        cout << endl;
    }

    void delBaseD (char ** arrfield) {
        field.deleteUnitOnField(arrfield, draguny.nameD);
        cout << endl;
    }

    void delUnitsOnField (char ** arrfield) {

        cout << endl;
        int del;
        cout << "Who to delete?\n";
        cout << "0-B, 1-M, 2-K, 3-P, 4-H, 5-G, 6-D\n";
        cin >> del;

        switch (del) {
            case 0 : {
                delBase (arrfield);
                field.printCount();
                break;
            }
            case 1 : {
                delBaseM (arrfield);
                field.printCount();
                break;
            }
            case 2 : {
                delBaseK (arrfield);
                field.printCount();
                break;
            }
            case 3 : {
                delBaseP (arrfield);
                field.printCount();
                break;
            }
            case 4 : {
                delBaseH (arrfield);
                field.printCount();
                break;
            }
            case 5 : {
                delBaseG (arrfield);
                field.printCount();
                break;
            }
            case 6 : {
                delBaseD (arrfield);
                field.printCount();
                break;
            }
        }
    }





};


#endif //LW1_BASE_H

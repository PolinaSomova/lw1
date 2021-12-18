

#ifndef LW1_FIELD_H
#define LW1_FIELD_H

#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>

using namespace std;

#include "units.h"
#include "mechniki.h"
#include "kopeyshiki.h"
#include "peshie.h"
#include "horse.h"
#include "gusary.h"
#include "draguny.h"





class field {

public:

    int rows = 10 + rand() % 12;
    int cols = 10 + rand() % 40;

    char ** createField() {


        char **arr = new char *[rows];

        for (int i = 0; i < rows; i++) {
            arr[i] = new char[cols];
        }

        return arr;
    }

    char ** fillingField(char ** arr) {

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if ((i == 0) || (i == (rows - 1)) || (j == 0) || (j == (cols - 1))) {
                    arr[i][j] = 'X';
                }
                else {
                    arr[i][j] = ' ';
                }
            }
        }

        return arr;
    }

    void printField (char ** arr) {

        cout << endl;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << arr[i][j] << ' ';
            }
            cout << endl;
        }
    }

public:

    int addi;
    int addj;


    int countUnit = 0;

    const int countMax = 10;


    units units;
    mechniki mechniki;
    kopeyshiki kopeyshiki;
    peshie peshie;
    horse horse;
    gusary gusary;
    draguny draguny;



    void printCount () {
        cout << "Units on field: " << countUnit;
        cout << endl;
    }

    char ** addUnitOnField(char ** arr, char unit) {


        addi = 1 + rand() % rows - 1;
        addj = 1 + rand() % cols - 1;

        if (countUnit < countMax) {
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {

                    if ((i == addi) && (j == addj) && (arr[i][j] == ' ')) {
                        arr[i][j] = unit;
                        countUnit++;

                        if (unit == mechniki.nameM) {
                            mechniki.printConditionM();
                        }
                        else if (unit == kopeyshiki.nameK) {
                            kopeyshiki.printConditionK();
                        }
                        else if (unit == peshie.nameP) {
                            peshie.printConditionP();
                        }
                        else if (unit == horse.nameH) {
                            horse.printConditionH();
                        }
                        else if (unit == gusary.nameG) {
                            gusary.printConditionG();
                        }
                        else if (unit == draguny.nameD) {
                            draguny.printConditionD();
                        }
                    }
                }
            }
        }
        else {
            cout << "The field is full\n";
        }

        return arr;
    }

    char ** deleteUnitOnField(char ** arr, char unit) {


        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (arr[i][j] == unit) {
                    arr[i][j] = ' ';
                    countUnit--;
                }
            }
        }

        return arr;
    }

    char ** copyField (char ** arr) {

        char ** copyarr;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[i][j] = copyarr[i][j];
            }
        }

        return copyarr;
    }

    void deleteArray (char ** arr) {

        for (int i = 0; i < rows; i++) {
            delete [] arr[i];
        }
        delete [] arr;
    }



};


#endif //LW1_FIELD_H

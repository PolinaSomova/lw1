

#ifndef LW1_FIELD_H
#define LW1_FIELD_H

#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include "windows.h"
#include "wincon.h"


using namespace std;

#include "units.h"
#include "mechniki.h"
#include "kopeyshiki.h"
#include "peshie.h"
#include "horse.h"
#include "gusary.h"
#include "draguny.h"
#include "castle.h"
#include "tower.h"
#include "diamond.h"
#include "bag.h"
#include "green.h"
#include "lack.h"
#include "mountain.h"





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

    castle castle;
    tower tower;
    diamond diamond;
    bag bag;

    green green;
    lack lack;
    mountain mountain;

    void printField (char ** arr) {

        cout << endl;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {


                if (arr[i][j] == castle.nameC) {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5 );
                    cout << arr[i][j] << ' ';
                }
                else if (arr[i][j] == tower.nameT) {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6 );
                        cout << arr[i][j] << ' ';
                    }
                else if (arr[i][j] == diamond.nameDiam) {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4 );
                    cout << arr[i][j] << ' ';
                }
                else if (arr[i][j] == bag.nameBag) {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8 );
                    cout << arr[i][j] << ' ';
                }
                else if (arr[i][j] == green.nameGreen) {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2 );
                    cout << arr[i][j] << ' ';
                }
                else if (arr[i][j] == lack.nameLack) {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1 );
                    cout << arr[i][j] << ' ';
                }
                else {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7 );
                    cout << arr[i][j] << ' ';
                }

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


    char ** moveU (char ** arr, char name, int step) {


        char temp;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (arr[i][j] == name) {
                    switch (step) {
                        case 1: {

                            if (((arr[i][j-1] == mountain.nameMount) && (name != peshie.nameP)) || (arr[i][j-1] == green.nameGreen) || ((arr[i][j-1] == lack.nameLack) && (name == horse.nameH))) {
                                temp = arr[i][j];
                                arr[i][j] = arr[i][j-1];
                                arr[i][j-1] = temp;
                            }
                            else {
                                cout << "No way\n";
                            }
                            break;
                        }
                        case 2: {

                            if (((arr[i][j+1] == mountain.nameMount) && (name != peshie.nameP)) || (arr[i][j+1] == green.nameGreen) || ((arr[i][j+1] == lack.nameLack) && (name == horse.nameH))) {
                                temp = arr[i][j];
                                arr[i][j] = arr[i][j+1];
                                arr[i][j+1] = temp;
                            }
                            else {
                                cout << "No way\n";
                            }
                            break;
                        }
                        case 3: {

                            if (((arr[i+1][j] == mountain.nameMount) && (name != peshie.nameP)) || (arr[i+1][j] == green.nameGreen) || ((arr[i+1][j] == lack.nameLack) && (name == horse.nameH))) {
                                temp = arr[i][j];
                                arr[i][j] = arr[i+1][j];
                                arr[i+1][j] = temp;
                            }
                            else {
                                cout << "No way\n";
                            }
                            break;
                        }
                        case 4: {

                            if (((arr[i-1][j] == mountain.nameMount) && (name != peshie.nameP)) || (arr[i-1][j] == green.nameGreen) || ((arr[i-1][j] == lack.nameLack) && (name == horse.nameH))) {
                                temp = arr[i][j];
                                arr[i][j] = arr[i-1][j];
                                arr[i-1][j] = temp;
                            }
                            else {
                                cout << "No way\n";
                            }
                            break;
                        }
                    }
                }
            }
        }
        return arr;
    }

    void doMoveU (char ** arr) {

        int step;
        char name;

        cout << "Who is going?";
        cin >> name;

        cout << "Which step?\n";
        cout << "1-left, 2-right, 3-down, 4-up";
        cin >> step;

        moveU(arr, name, step);
        printField(arr);

    }


};


#endif //LW1_FIELD_H

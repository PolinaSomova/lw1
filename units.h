

#ifndef LW1_UNITS_H
#define LW1_UNITS_H

#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>



using namespace std;


class units {

public:

    char nameUnit = 'U';

    /*
     * при старте здовровье 100%, по мере изменения кода меняется состояние
     */

    int healthUnit () {

        int health = 100;

        return health;
    }

    void printHealthUnit (char nameU, int healthU) {

        cout << "Health " << nameU << ": " << healthU << "%\n";
    }

     /*
     * при старте полностью защищен, по мере изменения кода меняется состояние
     */
    int armorUnit () {

        int shieldU = 1;

        return shieldU;
    }

    void printArmorUnit (char nameU, int shieldU) {

        cout << "Shield " << nameU << ": " << shieldU << "\n";

    }

    /*
     * при старте готов к атаке, по мере изменения кода меняется состояние
     */
    int attackUnit () {

        int attackU = 1;

        return attackU;
    }

    void printAttackUnit (int nameU, int attackU) {

        switch (attackU) {
            case 0: {
                cout << " is not ready to attack\n";
                break;
            }
            case 1: {
                cout << " is ready to attack\n";
                break;
            }

        }

    }

    /*  char ** moveM (char ** arr, int step) {


       char temp;
       for (int i = 0; i < field.rows; i++) {
           for (int j = 0; j < field.cols; j++) {

               if (arr[i][j] == nameM) {
                   switch (step):
                   case 1: {
                       temp = arr[i][j];
                       arr[i][j] = arr[i][j-1];
                       arr[i][j-1] = temp;
                   }
                   case 2: {
                       temp = arr[i][j];
                       arr[i][j] = arr[i][j+1];
                       arr[i][j+1] = temp;
                   }
                   case 3: {
                       temp = arr[i][j];
                       arr[i][j] = arr[i+1][j];
                       arr[i+1][j] = temp;
                   }
                   case 4: {
                       temp = arr[i][j];
                       arr[i][j] = arr[i-1][j];
                       arr[i-1][j] = temp;
                   }
               }
           }
       }

       return arr;
   }*/




};


#endif //LW1_UNITS_H

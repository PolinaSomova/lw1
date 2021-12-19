

#ifndef LW1_LANDSCAPE_H
#define LW1_LANDSCAPE_H
#include "green.h"
#include "lack.h"
#include "mountain.h"
#include "field.h"

using namespace std;

class landscape {

public:

    green green;
    lack lack;
    mountain mountain;

    field field;

    char ** addMountain(char **arr){

        for (int i = 0; i < field.rows; i++) {
            for (int j = 0; j < field.cols; j++) {
                if ((i > 5) && (i < 15) && (j > 3) && (j < 12) && (arr[i][j] == ' ')) {
                    arr[i][j] = mountain.nameMount;
                }
            }
        }
        return arr;
    };



    char ** addLack(char **arr){

        for (int i = 0; i < field.rows; i++) {
            for (int j = 0; j < field.cols; j++) {
                if ((i > 3) && (i < (field.rows - 5)) && (j > 6) && (j < 10) && (arr[i][j] == ' ')) {
                    arr[i][j] = lack.nameLack;
                }
            }
        }
        return arr;
    };

    char ** addGreen(char **arr){

        for (int i = 0; i < field.rows; i++) {
            for (int j = 0; j < field.cols; j++) {
                if (arr[i][j] == ' ') {
                    arr[i][j] = green.nameGreen;
                }
            }
        }
        return arr;
    };



    void printLandscape (char ** arrfield) {

        addLack(arrfield);
        addMountain(arrfield);

        addGreen(arrfield);
        addGreen(arrfield);
        addGreen(arrfield);
        addGreen(arrfield);
    }



};


#endif //LW1_LANDSCAPE_H



#ifndef LW1_MOUNTAIN_H
#define LW1_MOUNTAIN_H

#include "field.h"

using namespace std;


class mountain {

public:

    char nameMount = '^';

    field field;

    void addMountain(char **arr){

        for (int i = 0; i < field.rows; i++) {
            for (int j = 0; j < field.cols; j++) {
                if ((i % 3 == 0) && (j % 5 == 0) && (arr[i][j] == ' ')) {
                    arr[i][j] = nameMount;
                }
            }
        }

    };


};


#endif //LW1_MOUNTAIN_H

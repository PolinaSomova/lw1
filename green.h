

#ifndef LW1_GREEN_H
#define LW1_GREEN_H

#include "field.h"

using namespace std;


class green {

public:

    char nameGreen = '*';

    field field;

    char ** addGreen (char **arr){

        for (int i = 0; i < field.rows; i++) {
            for (int j = 0; j < field.cols; j++) {
                if (arr[i][j] == ' ') {
                    arr[i][j] = nameGreen;
                }
            }
        }
        return arr;
    };

};


#endif //LW1_GREEN_H

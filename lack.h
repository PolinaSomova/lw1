

#ifndef LW1_LACK_H
#define LW1_LACK_H

#include "field.h"


using namespace std;


class lack {

public:

    char nameLack = '~';

    field field;

    void addLack(char **arr){

        for (int i = 0; i < field.rows; i++) {
            for (int j = 0; j < field.cols; j++) {
                if ((i % 2 == 0) && (j % 6 == 0) && (arr[i][j] == ' ')) {
                    arr[i][j] = nameLack;
                }
            }
        }

    };

};


#endif //LW1_LACK_H



#ifndef LW1_LANDSCAPE_H
#define LW1_LANDSCAPE_H
#include "green.h"
#include "lack.h"
#include "mountain.h"

using namespace std;

class landscape {

public:

    green green;
    lack lack;
    mountain mountain;



    void printLandscape (char ** arrfield) {

        mountain.addMountain(arrfield);
        lack.addLack(arrfield);
        green.addGreen(arrfield);
    }



};


#endif //LW1_LANDSCAPE_H

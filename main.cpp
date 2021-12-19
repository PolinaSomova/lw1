#include <iostream>


#include "field.h"

#include "base.h"
#include "mountain.h"

#include "neutral.h"

#include "landscape.h"


using namespace std;

int main() {

    srand (time(NULL));


    field field;
    base base;
    neutral neutral;
    landscape landscape;



    char ** arrgame = field.fillingField(field.createField());

    base.addBaseOnField(arrgame);
    neutral.printNeutralObj(arrgame);
   // base.createUnitsOnField(arrgame);
    landscape.printLandscape(arrgame);
    field.printField(arrgame);

   /* field.doMoveU(arrgame);
    field.doMoveU(arrgame);
    field.doMoveU(arrgame);
    field.doMoveU(arrgame);*/










    /*field.printField(arrgame);
    base.createUnitsOnField(arrgame);
    field.printField(arrgame);*/

    /*cout << endl << endl;
    base.delUnitsOnField(arrgame);
    field.printField(arrgame);*/



    return 0;
}

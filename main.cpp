#include <iostream>


#include "field.h"
#include "units.h"
#include "mechniki.h"
#include "kopeyshiki.h"
#include "peshie.h"
#include "horse.h"
#include "gusary.h"
#include "draguny.h"
#include "base.h"
#include "mountain.h"


using namespace std;

int main() {

    srand (time(NULL));


    field field;
    units units;
    mechniki mechniki;
    kopeyshiki kopeyshiki;
    peshie peshie;
    horse horse;
    gusary gusary;
    draguny draguny;
    base base;
    mountain mountain;


    char ** arrgame = field.fillingField(field.createField());

    base.addBaseOnField(arrgame);
    mountain.addMountain(arrgame);
    field.printField(arrgame);

    /*field.printField(arrgame);
    base.createUnitsOnField(arrgame);
    field.printField(arrgame);*/

    /*cout << endl << endl;
    base.delUnitsOnField(arrgame);
    field.printField(arrgame);*/



    return 0;
}

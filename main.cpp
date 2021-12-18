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


    char ** arrgame = field.fillingField(field.createField());

    base.addBaseOnField(arrgame);
    base.createUnitsOnField(arrgame);
    field.printField(arrgame);

    cout << endl << endl;
    base.delUnitsOnField(arrgame);



    return 0;
}

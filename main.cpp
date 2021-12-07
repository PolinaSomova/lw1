#include <iostream>


#include "field.h"
#include "units.h"
#include "mechniki.h"
#include "kopeyshiki.h"
#include "peshie.h"
#include "horse.h"
#include "gusary.h"
#include "draguny.h"


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


    char ** arrgame = field.fillingField(field.createField());

    field.addUnitOnField(arrgame, mechniki.nameM);
    field.addUnitOnField(arrgame, kopeyshiki.nameK);
    field.addUnitOnField(arrgame,peshie.nameP);
    field.addUnitOnField(arrgame, horse.nameH);
    field.addUnitOnField(arrgame, gusary.nameG);
    field.addUnitOnField(arrgame, draguny.nameD);


    field.printField(arrgame);

    field.printCount();



    cout << endl << endl;

    field.deleteUnitOnField(arrgame, mechniki.nameM);
    field.printField(arrgame);
    field.printCount();

    return 0;
}

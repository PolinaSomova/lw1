#include <iostream>

#include "units.h"
#include "field.h"
#include "mechniki.h"
#include "kopeyshiki.h"
#include "peshie.h"
#include "horse.h"


using namespace std;

int main() {

    srand (time(NULL));


    field field;
    units units;
    mechniki mechniki;
    kopeyshiki kopeyshiki;
    peshie peshie;
    horse horse;



    char ** arrgame = field.fillingField(field.createField());

    field.addUnitOnField(arrgame, mechniki.nameM);


    field.printField(arrgame);

    field.printCount();



    cout << endl << endl;

    field.deleteUnitOnField(arrgame, mechniki.nameM);
    field.printField(arrgame);
    field.printCount();

    return 0;
}

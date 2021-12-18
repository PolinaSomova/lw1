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
#include "lack.h"
#include "green.h"
#include "neutral.h"
#include "castle.h"
#include "tower.h"
#include "diamond.h"
#include "bag.h"


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
    lack lack;
    green green;
    neutral neutral;
    castle castle;
    tower tower;
    diamond diamond;
    bag bag;


    char ** arrgame = field.fillingField(field.createField());

    base.addBaseOnField(arrgame);
    neutral.printNeutralObj(arrgame);

    /*mountain.addMountain(arrgame);
    lack.addLack(arrgame);

    green.addGreen(arrgame);*/

    field.printField(arrgame);

    /*field.printField(arrgame);
    base.createUnitsOnField(arrgame);
    field.printField(arrgame);*/

    /*cout << endl << endl;
    base.delUnitsOnField(arrgame);
    field.printField(arrgame);*/



    return 0;
}

#include <iostream>
#include "Fridge.h"
#include "Oven.h"
#include "IMakeCoffe.h"
#include "MakeAmericano.h"
#include "MakeEspresso.h"
#include "MakeLatte.h"
#include "Coffemachine.h"

int main()
{
    MakeAmericano* americanorequest = new MakeAmericano;
    MakeLatte* latterequest = new MakeLatte;
    MakeEspresso* espressorequest = new MakeEspresso;

    Coffemachine* machine = new Coffemachine(americanorequest);

    machine->MakeCoffe();
     
    machine->Setrequest(latterequest);

    machine->MakeCoffe();

    machine->Setrequest(espressorequest);

    machine->MakeCoffe();   

}


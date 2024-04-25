#include "Coffemachine.h"
Coffemachine::Coffemachine(IMakeCoffe* drinkrequest)
{
	this->drinkrequest = drinkrequest;

}
void Coffemachine::MakeCoffe()
{
	if (drinkrequest)
		drinkrequest->MakeCoffe();
}

void Coffemachine::Setrequest(IMakeCoffe* drinkrequest)
{
	if (drinkrequest)
	   this -> drinkrequest = drinkrequest;
}

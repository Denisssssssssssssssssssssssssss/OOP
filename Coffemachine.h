#pragma once
#include "IMakeCoffe.h"
class Coffemachine
{
private:
	IMakeCoffe* drinkrequest;

public:
	Coffemachine(IMakeCoffe* drinkrequest);
	void MakeCoffe();
	void Setrequest(IMakeCoffe* drinkrequest);
};
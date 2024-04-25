#pragma once
#include "IMAkeCoffe.h"
class MakeAmericano: public IMakeCoffe
{
public:
	virtual void MakeCoffe() override;
	MakeAmericano();
};


#pragma once
#include "IMAkeCoffe.h"
class MakeEspresso : public IMakeCoffe
{
public:
	virtual void MakeCoffe() override;
	MakeEspresso();
};
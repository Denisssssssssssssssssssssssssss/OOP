#pragma once
#include "IMAkeCoffe.h"
class MakeLatte : public IMakeCoffe
{
public:
	virtual void MakeCoffe() override;
	MakeLatte();
};


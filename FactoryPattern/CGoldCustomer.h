#pragma once
#include "ICustomer.h"
class CGoldCustomer :
	public ICustomer
{
	virtual void AddDiscount();
	virtual void AddPoints();
};


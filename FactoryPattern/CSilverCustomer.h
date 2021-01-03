#pragma once
#include "ICustomer.h"
class CSilverCustomer :
	public ICustomer
{
	virtual void AddDiscount() ;
	virtual void AddPoints() ;
};


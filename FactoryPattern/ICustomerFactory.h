#pragma once
#include "ICustomer.h"
class ICustomerFactory 
{
public:
	static ICustomer* GetCustomerFactory(CUSTOMERTYPE _customtype);
};


#include "ICustomerFactory.h"

#include"CGoldCustomer.h"
#include"CSilverCustomer.h"

ICustomer* ICustomerFactory::GetCustomerFactory(CUSTOMERTYPE _customtype)
{
	if (_customtype == CUSTOMERTYPE::GOLDCUSTOMER)
	{
		CGoldCustomer* _goldCustomer = new CGoldCustomer();
		return _goldCustomer;
		
	}
	else if (_customtype == CUSTOMERTYPE::SILVERCUSTOMER)
	{
		CSilverCustomer* _silverCustomer = new CSilverCustomer();
		return _silverCustomer;
	}
	return nullptr;
}

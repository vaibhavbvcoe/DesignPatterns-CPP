#pragma once

enum class CUSTOMERTYPE
{
	GOLDCUSTOMER, SILVERCUSTOMER
};
class ICustomer
{
public:
	virtual void AddDiscount() = 0 ;
	virtual void AddPoints() = 0 ;
};


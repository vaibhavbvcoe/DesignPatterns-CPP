// decorater.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


#include<iostream>
#include <tchar.h>
using namespace std;

class IPizza
{
protected:
	int m_cost;
public:
	virtual void PizzaType() = 0 ;
	virtual int GetCost() = 0 ;
};

class SimplePizza:public IPizza
{

public:
	SimplePizza()
	{
		m_cost = 100;
	}
	void PizzaType()
	{
		std::cout<<"I am simple Pizza "<<std::endl;

	}
	int GetCost() 
	{
		std::cout<<"my basic cost is "<<m_cost<<endl;
		return m_cost;

	}
};
class ComplexPizza:public IPizza
{

public:
	ComplexPizza()
	{
		m_cost = 300;
	}
	void PizzaType()
	{
		std::cout<<"I am Complex Pizza"<<std::endl;

	}
	int GetCost() 
	{
		std::cout<<"my basic cost is "<<m_cost<<endl;
		return m_cost;

	}

};

class Decorater:public IPizza
{
protected:
	IPizza *m_Pizza;
public :
	Decorater(IPizza *pizza):m_Pizza(pizza)
	{
	}

};
class DecoraterToppingsOlive:public Decorater
{
public:
	DecoraterToppingsOlive(IPizza *dec):Decorater(dec)
	{        
		m_cost = 400;
	}
	void PizzaType()
	{
		std::cout<<"I am having olive topping"<<endl;
		m_Pizza->PizzaType();
	}
	int GetCost() 
	{
		std::cout<<"my Olive topping cost is "<<m_cost<<endl;
		return (m_cost +m_Pizza->GetCost());

	}

};
class DecoraterToppingsCorn:public Decorater
{
public:
	DecoraterToppingsCorn(IPizza *dec):Decorater(dec)
	{        
		m_cost = 200;
	}
	void PizzaType()
	{
		std::cout<<"I am having corn topping"<<endl;
		m_Pizza->PizzaType();
	}
	int GetCost() 
	{
		std::cout<<"corn topping cost is "<<m_cost<<endl;
		return (m_cost+m_Pizza->GetCost());
	}

};

class DecoraterToppingsPepporoni:public Decorater
{
public:
	DecoraterToppingsPepporoni(IPizza *dec):Decorater(dec)
	{        
		m_cost = 900;
	}
	void PizzaType()
	{
		std::cout<<"I am having pepproni topping"<<endl;
		m_Pizza->PizzaType();
	}
	int GetCost() 
	{
		std::cout<<"pepproni cost is "<< m_cost<<endl;
		return (m_cost+m_Pizza->GetCost());
	}

};
int _tmain(int argc, _TCHAR* argv[])
{
	IPizza *pizz = new SimplePizza();

	Decorater *dec = new DecoraterToppingsPepporoni(	new DecoraterToppingsOlive(	new DecoraterToppingsCorn(pizz)	)	);
	dec->PizzaType();
	cout<< std::endl;
	std::cout<< "total cost is "<<dec->GetCost()<<endl;

	std::cout<<"\n======================================================\n ";
	pizz = new ComplexPizza();

	dec = new DecoraterToppingsPepporoni(	new DecoraterToppingsOlive(	new DecoraterToppingsCorn(pizz)	)	);
	dec->PizzaType();
	cout<< std::endl;
	std::cout<< "total cost is "<<dec->GetCost()<<endl;

	return 0L;
}


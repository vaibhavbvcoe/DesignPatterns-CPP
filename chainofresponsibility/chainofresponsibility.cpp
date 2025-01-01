// chainofresponsibility.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class ATMHandler
{
	ATMHandler*m_handler;
public:
	ATMHandler(ATMHandler *hndler)
	{
		m_handler = hndler;
	}
	virtual void HandleNxtRequest( int amt )
	{
		
		if(m_handler)
		{
			m_handler->HandleNxtRequest(amt);
		}
	}

};

class INR2000Handler:public ATMHandler
{
public:
	INR2000Handler(ATMHandler*hnd):ATMHandler(hnd)
	{
	}

	virtual void HandleNxtRequest( int amt )
	{
		if(amt % 2000 == 0)
		{
			std::cout<<"currency notes of 2000 dispensed is "<<(amt/2000)<<endl;
			
		}
		else
		{
			int INR2000amt = amt/2000;
			std::cout<<"currency notes of 2000 dispensed is "<<(amt/2000)<<endl;
			int amtleft = amt-(INR2000amt*2000);
			ATMHandler::HandleNxtRequest(amtleft);
		}
	}

};


class INR500Handler:public ATMHandler
{
public:
	INR500Handler(ATMHandler*hnd):ATMHandler(hnd)
	{
	}

	virtual void HandleNxtRequest( int amt )
	{
		if(amt % 500 == 0)
		{
			std::cout<<"currency notes of 500 dispensed is "<<(amt/500)<<endl;
			
		}
		else
		{
			int INR500amt = amt/500;
			std::cout<<"currency notes of 500 dispensed is "<<(amt/500)<<endl;
			int amtleft = amt-(INR500amt*500);
			ATMHandler::HandleNxtRequest(amtleft);
		}
	}

};

class INR200Handler:public ATMHandler
{
public:
	INR200Handler(ATMHandler*hnd):ATMHandler(hnd)
	{
	}

	virtual void HandleNxtRequest( int amt )
	{
		if(amt % 200 == 0)
		{
			std::cout<<"currency notes of 200 dispensed is "<<(amt/200)<<endl;
			
		}
		else
		{
			int INR200amt = amt/200;
			std::cout<<"currency notes of 200 dispensed is "<<(amt/200)<<endl;
			int amtleft = amt-(INR200amt*200);
			ATMHandler::HandleNxtRequest(amtleft);
		}
	}

};


class INR100Handler:public ATMHandler
{
public:
	INR100Handler(ATMHandler*hnd):ATMHandler(hnd)
	{
	}

	virtual void HandleNxtRequest( int amt )
	{
		if(amt % 100 == 0)
		{
			std::cout<<"currency notes of 100 dispensed is "<<(amt/100)<<endl;
			
		}
		else
		{
			int INR100amt = amt/100;

			int amtleft = amt-(INR100amt*100);
			std::cout<<"currency notes of 100 dispensed is "<<(amt/100)<<endl;
			ATMHandler::HandleNxtRequest(amtleft);
		}
	}

};

class INR50Handler:public ATMHandler
{
public:
	INR50Handler(ATMHandler*hnd):ATMHandler(hnd)
	{
	}

	virtual void HandleNxtRequest( int amt )
	{
		if(amt % 50 == 0)
		{
			std::cout<<"currency notes of 50 dispensed is "<<(amt/50)<<endl;
			
		}
		else
		{
			int INR50amt = amt/50;
			int amtleft = amt-(INR50amt*50);
			std::cout<<"currency notes of 50 dispensed is "<<(amt/50)<<endl;
			ATMHandler::HandleNxtRequest(amtleft);
		}
	}

};
class INR20Handler:public ATMHandler
{
public:
	INR20Handler(ATMHandler*hnd):ATMHandler(hnd)
	{
	}

	virtual void HandleNxtRequest( int amt )
	{
		if(amt % 20 == 0)
		{
			std::cout<<"currency notes of 20 dispensed is "<<(amt/20)<<endl;
			
		}
		else
		{
			int INR20amt = amt/20;
			int amtleft = amt-(INR20amt*20);
			std::cout<<"currency notes of 20 dispensed is "<<(amt/20)<<endl;
			ATMHandler::HandleNxtRequest(amtleft);
		}
	}

};



class INR10Handler:public ATMHandler
{
public:
	INR10Handler(ATMHandler*hnd):ATMHandler(hnd)
	{
	}

	virtual void HandleNxtRequest( int amt )
	{
		if(amt % 10 == 0)
		{
			std::cout<<"currency notes of 10 dispensed is "<<(amt/10)<<endl;
			
		}
		else
		{
			std::cout<<"cannot withdraw this amt "<<amt<<endl<<endl;
		}
	}

};

int _tmain(int argc, _TCHAR* argv[])
{
	INR10Handler * obj10 = new INR10Handler(NULL);
	INR20Handler *obj20 = new INR20Handler(obj10);
	INR50Handler*obj50 =  new INR50Handler(obj20);
	INR100Handler*obj100 = new INR100Handler(obj50);
	INR200Handler *obj200 = new INR200Handler(obj100);
	INR500Handler *obj500 = new INR500Handler(obj200);
	INR2000Handler*obj2000= new INR2000Handler(obj500);
	ATMHandler*hand = new ATMHandler(obj2000);


	hand->HandleNxtRequest(23456);



	return 0;
}


// kcheckPrac.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
//class singleton
//{
//	singleton()
//	{
//	}
//	singleton(singleton& )
//	{
//	}
//	singleton & operator =(singleton&)
//	{
//		return *this;
//		
//	}
//public:
//	void check()
//	{
//		std::cout<<"check my name"<<endl;
//	}
//	static singleton *singleton_obj;
//	static singleton * GetmySingleton()
//	{
//		if(singleton_obj==NULL)
//			singleton_obj= new singleton();
//		return singleton_obj;
//	}
//};
//singleton* singleton::singleton_obj;
//
//class ICommand
//{
//public:
//	virtual void Execute()=0;
//};
//class Light
//{
//public:
//	void ON()
//	{
//		std::cout<<"light on"<<endl;
//	}
//	void OFF()
//	{
//		std::cout<<"Light off"<<endl;
//	}
//};
//class LightOnCommand:public ICommand
//{
//	Light *m_lt;
//public:
//	LightOnCommand(Light* lt)
//	{
//		m_lt = lt;
//	}
//	void Execute()
//	{
//		m_lt->ON();
//	}
//};
//
//class LightOffCommand:public ICommand
//{
//	Light *m_lt;
//public:
//	LightOffCommand(Light* lt)
//	{
//		m_lt = lt;
//	}
//	void Execute()
//	{
//		m_lt->OFF();
//	}
//};
//
//class Remote
//{
//	ICommand*m_com;
//public:
//	Remote(ICommand*com)
//	{
//		m_com= com;
//	}
//	void Pressbutton()
//	{
//		m_com->Execute();
//	}
//
//
//};

#include<string>
#include<vector>

template<typename T>
class Observer
{
public:
	virtual void Update(T data)=0;
};

template<typename T>
class MyObserver : public Observer<T>
{
public:
	explicit MyObserver(const std::string &str) : name(str) {}
	void Update(T msg)
	{
		cout<<name << " Got message " << msg << std::endl;
	}
private:
	std::string name;
};



template<typename T>
class Subject
{
	vector<Observer<T>*>ob;
public:
	void Add(Observer<T>*o)
	{
		ob.push_back(o);
	}
	void Remove(Observer<T>*o)
	{
		
		for( int i=0; i< ob.size();i++)
		{
			if(ob[i]==o) 
			{
				ob.erase(ob.begin()+i)
					break;
			}
		}	
		
	}
	void Notify(T val)
	{
		for(int i = 0 ; i < ob.size() ;i++)
		{
			ob[i]->Update(val);
		}
	}
};

template<typename T>
class MySubject : public Subject<T>
{
public:
	enum Message {ADD, REMOVE};
};




int _tmain(int argc, _TCHAR* argv[])
{
	MySubject <char*> *x = new MySubject<char*>();
	
	MyObserver<char*> *obs1 = new MyObserver <char*>("observer1");
	MyObserver<char*> *obs2 =  new MyObserver<char*>("observer2");
	MyObserver<char*> *obs23 =  new MyObserver<char*>("observer23");

	x->Add(obs1);
	x->Add(obs2);
	x->Add(obs23);
	x->Notify("teddy");
	

	/*singleton * obj = singleton::GetmySingleton();
	std::cout<<obj<<endl;
	singleton*obj1  =  singleton::GetmySingleton();*/
	//std::cout<<obj1<<endl;

//ICommand *com =new LightOnCommand(new Light());
//Remote*rem =  new Remote(com);
//rem->Pressbutton();
//

	
	return 0;
}



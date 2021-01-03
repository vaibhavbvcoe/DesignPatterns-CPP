#pragma once
#include<iostream>
using namespace std;
#include<vector>

#include"CObserver.h"

class CSubject
{
	vector<CObserver* > m_Observer;

public:
	virtual void Attach(CObserver* obj);
	virtual void Deattach(CObserver* obj);
	virtual void Notify();


};


#pragma once
class CSubject;

class CObserver
{
public:
	virtual void Update(CSubject* obj) = 0;
};


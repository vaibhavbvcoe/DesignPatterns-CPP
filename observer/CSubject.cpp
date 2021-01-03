#include "CSubject.h"

void CSubject::Attach(CObserver* obj)
{
	if (obj != nullptr)
		m_Observer.push_back(obj);
}

void CSubject::Deattach(CObserver* obj)
{
	int size = m_Observer.size();
	int i = 0;
	for ( i = 0; i < size; i++)
	{
		if (m_Observer[i] == obj)
			break;
	}

	m_Observer.erase(m_Observer.begin() + i);


}

void CSubject::Notify()
{
	int count = m_Observer.size();
	for (int i = 0; i < count; i++) 
	{
		m_Observer[i]->Update(this);
	}
}

#include "CSingleton.h"
CSingleton* CSingleton::m_StaticObject = nullptr;

CSingleton* CSingleton::GetSingletonObject()
{

	if (m_StaticObject == nullptr)
		m_StaticObject = new CSingleton();
	return m_StaticObject;

}

CSingleton::CSingleton() {
	m_data = 0;
}

void CSingleton::SetData(int value) 
{
	m_data = value;
}

int CSingleton::GetData()
{
	return m_data;
}
CSingleton::~CSingleton() {
	if (m_StaticObject != nullptr)
	{
		delete m_StaticObject;
		m_StaticObject = nullptr;
	}

}


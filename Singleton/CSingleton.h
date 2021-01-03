#pragma once
class CSingleton
{
	CSingleton();
	CSingleton(CSingleton&)= delete;
	CSingleton& operator= (CSingleton&)=delete;
	CSingleton(CSingleton&&) = delete;
	static CSingleton* m_StaticObject;
	int m_data;
public:
	
	static CSingleton* GetSingletonObject();
	void SetData(int value);
	int GetData();
	~CSingleton();
	
};


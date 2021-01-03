#pragma once
#include"CTarget.h"
#include "CAdaptee.h"
class CAdaptor:CTarget,CAdaptee
{
	
	CAdaptee* m_Adaptee;
	public:
		CAdaptor( CAdaptee* adpt) : m_Adaptee(adpt) {}
		void Draw();

};


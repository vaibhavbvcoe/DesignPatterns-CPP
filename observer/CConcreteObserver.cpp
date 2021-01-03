#include "CConcreteObserver.h"

CConcreteNewsAgency::CConcreteNewsAgency(CSubject* obj)
{
	m_conSubject = obj;
	m_conSubject->Attach(this);
}

CConcreteNewsAgency::~CConcreteNewsAgency()
{
	m_conSubject->Deattach(this);
}

void CConcreteNewsAgency::Update(CSubject* obj)
{
	if (obj == m_conSubject) 
	{
		PublishNewsReport();
	}
}

void CConcreteNewsAgency::PublishNewsReport()
{
	cout << m_conSubject->GetCurrentReport() << endl;
	cout << m_conSubject->GetMonthlyReport() << endl;
	cout << m_conSubject->GetWeeklyReport()  << endl;		
}

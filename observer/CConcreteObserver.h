#pragma once
#include "CObserver.h"
#include"CConcreteSubject.h"

class CConcreteNewsAgency :
    public CObserver
{
    CConcreteWeatherReport* m_conSubject;

    
public:
    CConcreteNewsAgency(CSubject* obj);
   
    void PublishNewsReport();

    ~CConcreteNewsAgency();

    void Update(CSubject* obj) override ;

};


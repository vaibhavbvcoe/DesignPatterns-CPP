#pragma once
#include "CSubject.h"
class CConcreteWeatherReport :
    public CSubject
{
    char m_strWeatherReport[256];
public:

    CConcreteWeatherReport();

    auto GetCurrentReport();
    auto GetWeeklyReport();
    auto GetMonthlyReport();

    auto UpdateWeatherReport();
  

};


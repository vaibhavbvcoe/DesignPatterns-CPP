#include "CConcreteSubject.h"

CConcreteWeatherReport::CConcreteWeatherReport()
{

	strcpy(m_strWeatherReport, "\0");
}


auto CConcreteWeatherReport::GetCurrentReport()
{
	return "this is Current Weather report";
}


auto CConcreteWeatherReport::GetWeeklyReport()
{
	return "this is Weekly Weather report";
}

auto CConcreteWeatherReport::GetMonthlyReport()
{
	return "this is Monthly Weather report";
}

auto CConcreteWeatherReport::UpdateWeatherReport()
{
	GetCurrentReport();
	GetWeeklyReport();
	GetMonthlyReport();
}

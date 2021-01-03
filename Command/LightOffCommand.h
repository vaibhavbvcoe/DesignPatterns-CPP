#pragma once
#include"Light.h"
#include"Command.h"
class LightOffCommand :public Command
{
	Light* m_Light;
public:
	LightOffCommand(Light* lt)
	{
		m_Light = lt;
	}
	virtual void Execute() 
	{
		m_Light->LightOff();
	}

};


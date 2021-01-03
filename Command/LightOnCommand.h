#pragma once
#include "Command.h"
#include "Light.h"

class LightOnCommand :
	public Command
{
	Light* m_Light;
public:
	LightOnCommand(Light* lt) 
	{
		m_Light = lt;
	}
	virtual void Execute() 
	{
		m_Light->LightOn();
	}

};


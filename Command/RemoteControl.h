#pragma once
#include"Command.h"
class RemoteControl
{
	Command* m_command;
public:
	void SetCommand(Command* comm)
	{
		m_command = comm;
	}
	void PressButton()
	{
		m_command->Execute();
	}

};


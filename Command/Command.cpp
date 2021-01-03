// Command.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"RemoteControl.h"
#include"Light.h"
#include"LightOffCommand.h"
#include"LightOnCommand.h"

int main()
{
    Light* m_Light = new Light;
    LightOnCommand* m_LightONCommand = new LightOnCommand(m_Light);
    RemoteControl* rtControl = new RemoteControl();
    rtControl->SetCommand(m_LightONCommand);
    rtControl->PressButton();

    delete m_Light, m_LightONCommand, rtControl;
    
}



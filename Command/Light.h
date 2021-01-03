#pragma once
#include<iostream>
using namespace std;

class Light
{
public:
	virtual void LightOn() { std::cout << "Light on.\r\nPlease check\r\n"; }
	virtual void LightOff() { std::cout << "Light off.\r\nPlease check\r\n"; }
};


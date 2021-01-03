// Singleton.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"CSingleton.h"

using namespace std;
int main()
{
	CSingleton* m_Object1 = CSingleton::GetSingletonObject();
	m_Object1->SetData(32);

	CSingleton* m_Object2 = CSingleton::GetSingletonObject();
	m_Object2->GetData();

	cout << "Object address 1 \r\n" << m_Object1 << endl;
	cout << "Object address 2 \r\n" << m_Object2 << endl;


    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

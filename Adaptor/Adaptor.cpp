// Adaptor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Intent

    Convert the interface of a class into another interface clients expect. 
    Adapter lets classes work together that couldn't otherwise because of incompatible interfaces. [GoF, p139]
    Wrap an existing class with a new interface.
    Impedance match an old component to a new system
*/
#include <iostream>

#include "CTarget.h"
#include"CAdaptee.h"
#include "CAdaptor.h"

int main()
{
    
    CAdaptee* _adaptee = new CAdaptee();

    CAdaptor* _adaptor = new CAdaptor(_adaptee);
    _adaptor->Draw();


    std::cout << "Hello World!\n";
}
/*
Rules of thumb
Adapter makes things work after they're designed; Bridge makes them work before they are. [GoF, p219]

Bridge is designed up-front to let the abstraction and the implementation vary independently. Adapter is retrofitted to make unrelated classes work together. [GoF, p161]

Adapter provides a different interface to its subject. Proxy provides the same interface. Decorator provides an enhanced interface. [GoF. p216]

Adapter is meant to change the interface of an existing object. Decorator enhances another object without changing its interface. Decorator is thus more transparent to the application than an adapter is. As a consequence, Decorator supports recursive composition, which isn't possible with pure Adapters. [GoF, 149]

Facade defines a new interface, whereas Adapter reuses an old interface. Remember that Adapter makes two existing interfaces work together as opposed to defining an entirely new one. [GoF, pp219]
*/

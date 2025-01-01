// prototype.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Shape
{
public:
	virtual Shape* clone() = 0;
	virtual void draw() = 0;

};

class Rectangle :public Shape
{
	int m_length, m_width;
public:
	Rectangle(int l, int w) :m_length(l), m_width(w)
	{
	}
	Shape* clone() override
	{
		return new Rectangle(*this);
	}
	virtual void draw() override
	{

		std::cout << "I am a rectangle my area is " << m_length * m_width << std::endl;
	}
};

class Square :public Shape
{
	int m_side;
public:
	Square(int l) :m_side(l)
	{
	}
	Shape* clone() override
	{
		return new Square(*this);
	}
	virtual void draw() override
	{
		std::cout << "I am a square with area " << m_side * m_side << std::endl;
	}
};
int main()
{
	Shape* shp = new Rectangle(2, 3);
	shp->draw();
	Shape* shp1 = shp->clone();
	shp1->draw();


	return 0L;
}
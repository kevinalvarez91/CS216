/*

CS216
Lab 7
Due Nov 27
*/
~~~~~~~~~~~~~~~~~circle.h~~~~~~~~~~~~~~~~
#include <iostream>
using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H
class Circle

{
public:
Circle();
Circle(double);
double getArea() const;
double getRadius() const;
void setRadius(double);
static int getNumberOfObjects();
bool operator <(const Circle& other);
bool operator <=(const Circle& other);
bool operator ==(const Circle& other);
bool operator !=(const Circle& other);
bool operator >(const Circle& other);
bool operator >=(const Circle& other);

private:
double radius;
static int numofObj;

};

#endif

~~~~~~~~~~~~~~~circle.cpp~~~~~~~~~~~~~~
#include "circle.h"

Circle::Circle()
{
	radius = 0;
	numofObj++;
}

int Circle ::numofObj = 0;

Circle::Circle(double r)
{
	radius = r;
	numofObj++;
}

double Circle::getArea() const
{
	return 3.14*radius*radius;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double r)
{
	radius = r;
}

int Circle::getNumberOfObjects()
{
	return numofObj;
}

// overloaded < operator

bool Circle::operator <(const Circle& other) 
{
	if(radius < other.radius) 
	{
		return true;
	}
	else
		return false;
}

// overloaded <= operator

bool Circle::operator <=(const Circle& other) 
{
	if(radius <= other.radius)
	{
		return true;
	}else

		return false;
}

// overloaded == operator

bool Circle::operator == (const Circle& other) 
{
	if(radius == other.radius) 
	{
		return true;
	}else
		return false;
}

// overloaded != operator

bool Circle::operator !=(const Circle& other) 
{
	if(radius != other.radius) 
	{
		return true;
	}else
		return false;
}

// overloaded > operator

bool Circle::operator >(const Circle& other) 
{
	if(radius > other.radius) 
	{
		return true;
	}else
		return false;
}

// overloaded >= operator

bool Circle::operator >=(const Circle& other) 
{
	if(radius >= other.radius) 
	{
		return true;
	}else
		return false;
}





~~~~~~~~~~~~~~~~main.cpp~~~~~~~~~~~~
#include "circle.h"

int main() 
{

    //Declearing the radii of 2 circles in order to compare
    Circle c1(7);
	Circle c2(6);



    //prints true or false in boolean so 1 or 0

	bool compare;



    cout << "------------" << endl;

    compare = c1 >= c2;
    cout<< "c1 >= c2 : "<< (compare ? "true" : "false") << endl;

	compare = c1 <= c2;
    cout<< "c1 <= c2 : "<< (compare ? "true" : "false") << endl;

    compare = c1 != c2;
    cout<< "c1 != c2 : "<< (compare ? "true" : "false") << endl;

    compare = c1 < c2;
    cout<< "c1 = c2 : "<< (compare ? "true" : "false") << endl;

    compare = c1 > c2;
    cout<< "c1 > c2 : "<< (compare ? "true" : "false") << endl;

    compare = c1 == c2;
    cout<< "c1 == c2 : "<< (compare ? "true" : "false") << endl;
    cout << endl;
    


}

/*
------------
c1 >= c2 : true
c1 <= c2 : false
c1 != c2 : true
c1 = c2 : false
c1 > c2 : true
c1 == c2 : false
*/
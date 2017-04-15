//Submitted by Sabin Sapkota//

#include "Circle.h"
//Standard circle constructors and radius and area
Circle::Circle()
{
	radius = 1;
}


Circle::Circle(double newRadius)
{
	radius = newRadius;
}


double Circle::getArea()
{
	return radius * radius * 3.14159;
}


double Circle::getRadius()
{
	return radius;
}


void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}

bool Circle::operator<(Circle& c2)
{
	return getRadius() < c2.getRadius();
}

bool Circle::operator>(Circle& c2)
{
	return getRadius() > c2.getRadius();
}

bool Circle::operator>=(Circle& c2)
{
	return getRadius() >= c2.getRadius();
}

bool Circle::operator<=(Circle& c2)
{
	return getRadius() <= c2.getRadius();

}

bool Circle::operator==(Circle& c2)
{
	return getRadius() == c2.getRadius();
}

bool Circle::operator!=(Circle& c2)
{
	return getRadius() != c2.getRadius();
}
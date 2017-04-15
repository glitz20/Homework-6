//Submitted by Sabin Sapkota//
//Ex 6.4//
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle
{
public:
	Circle();
	Circle(double);
	double getArea();
	double getRadius();
	void setRadius(double);
	bool operator<(Circle& c2);//Implementing all the operators
	bool operator>(Circle& c2);
	bool operator==(Circle& c2);
	bool operator!=(Circle& c2);
	bool operator<=(Circle& c2);
	bool operator>=(Circle& c2);

private:
	double radius;
};


#endif

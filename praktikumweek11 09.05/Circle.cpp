#include "Circle.h"

const double PI = 3.1415;
Circle::Circle(int x, int y, double radius) : Shape(1,"circle"), radius(radius)
{
	setPoint(0, x, y);
}

double Circle::getPer() const
{
	return 2 * PI * radius;
}
void Circle::print()const
{
	std::cout         << "----" << std::endl;
	std::cout<< " / " << "    " <<" \ "<< std::endl;
	std::cout<<" \ " << "    " << " / " << std::endl;
	       std::cout << "-----" << std::endl;
}

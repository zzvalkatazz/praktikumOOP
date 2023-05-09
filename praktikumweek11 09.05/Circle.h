#ifndef CIRCLE
#define CIRCLE
#include "Shape.h"

class Circle : public Shape
{
	double radius;
public:
	Circle(int x, int y, double radius);	
	double getPer() const override;
	void print() const override
};
#endif
#ifndef RECTANGLE
#define RECTANGLE
#include "Shape.h"

class Rectangle :public Shape
{
public:
	Rectangle(int x1, int y1, int x3, int y3);
	double getPer() const override;
	void print() const override;

};
#endif
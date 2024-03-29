﻿#include "Shape.h"
Shape::Shape(size_t pointsCount,const std::string& label) : pointsCount(pointsCount) , label(label)
{
	points = new point[pointsCount];
}
void Shape::copyFrom(const Shape& other)
{
	points = new point[other.pointsCount];
	for (int i = 0; i < other.pointsCount; i++)
	{
		points[i] = other.points[i];
	}
	pointsCount = other.pointsCount;
}
void Shape::free()
{
	delete[]points;
}
const std::string& Shape::getLabel()
{
	return label;
}
Shape::Shape(const Shape& other)
{
	copyFrom(other);
}
Shape& Shape::operator=(const Shape& other)
{
	if (this != &other)
	{
		free();
		copyFrom(other);
	}
	return *this;
}
Shape::~Shape()
{
	free();
}
const Shape::point& Shape::getPointAtIndex(size_t index)const
{
	if (index >= pointsCount)
	{
		throw std::exception("Ïnvalid point index!");
	}
	return points[index];
}
void Shape::setPoint(size_t pointIndex, int x, int y)
{
	if (pointIndex >= pointsCount)
	{
		throw std::exception("Invalid point index!");
	}
	points[pointIndex] = point(x, y);
}

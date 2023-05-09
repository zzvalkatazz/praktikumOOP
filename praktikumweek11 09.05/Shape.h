#ifndef  SHAPE
#define  SHAPE
#include<iostream>
#include<string>
class Shape
{
protected:
	struct point
	{
		point() :x(0), y(0) {}
		point(int x, int y) :x(x), y(y) {}
		int x;
		int y;
		double getDist(const point& other) const
		{
			int dx = x - other.x;
			int dy = y - other.y;
			return sqrt(dx * dx + dy * dy);
		}
	};
	const point& getPointAtIndex(size_t index)const;
private:
	point* points;
	size_t pointsCount;
	std::string label;
	void copyFrom(const Shape& other);
	void free();
public:
	const std::string getLabel();
	Shape(size_t pointsCount,std::string label);
	Shape(const Shape& other);
	Shape& operator=(const Shape& other);
	virtual ~Shape();

	virtual void setPoint(size_t pointIndex, int x, int y);
	virtual double getPer() const = 0;
	virtual void print() const = 0;


};
#endif
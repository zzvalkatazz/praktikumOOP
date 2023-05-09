#include<iostream>
using namespace std;

#include"Rectangle.h"
#include"Circle.h"
#include"Triangle.h"

void  printPers(const Shape* const* shapes, size_t shapesCount)
{
	for (int i = 0; i < shapesCount; i++)
		cout << shapes[i]->getPer() << endl;
}

void freeCollection(Shape** shapes, size_t shapesCount)
{
	for (int i = 0; i < shapesCount; i++)
	{
		delete shapes[i];
	}
	delete[]shapes;
}
int main()
{
	Shape** arr = new Shape * [4];
	std::cout << endl;
	printPers(arr, 4);
	
}
#include<iostream>
#include"Tire.h"
Tire::Tire(const std::string& name, const std::string& manifacture, const int year, const int wide, const int profile, const int diameter) : AutoPart(name, manifacture, year), wide{ wide }, profile{ profile }, diameter{ diameter }
{
}
void Tire::display() const
{
	std::cout <<this->diameter<<this->width;
}

#include "Device.h"
#include<cstring>
#include<iostream>
Device::Device(const char* brand, const double price,const int size)
{
	this->size = size;
	this->brand = new char[size];
	strcpy(this->brand, brand);
	this->price = price;
}
Device::Device(const Device& other)
{
	brand = new char[other.size];
	strcpy(brand, other.brand);
	price = other.price;
}
Device& Device::operator=(const Device& other)
{
	if (this != &other)
	{
		delete[]brand;
		brand = new char[other.size];
		strcpy(brand, other.brand);
		price = other.price;
	}
	return *this;
}
Device::~Device()
{
	delete[]brand;
}
const char* Device::getBrand()
{
	return this->brand;
}
const double Device::getPrice()
{
	return this->price;
}
void Device::setBrand(char* brand)
{
	strcpy(this->brand, brand);
}
void Device::setPrice(double price)
{
	this->price = price;
}
void Device::input()
{
	std::cin >> size;
	std::cin.getline(brand,size);
	std::cin.ignore();
 	std::cin >>price;
}
void Device::output()
{
	std::cout << size << std::endl;
	std::cout << brand<<std::endl;
	std::cout << price << std::endl;
}
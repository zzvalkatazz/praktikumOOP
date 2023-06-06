#include"BrokenDevice.h"
#include<cstring>
#include<iostream>
BrokenDevice::BrokenDevice(const char* brand, const double price, const char* sympthoms, const int size, const unsigned repairDays, const int size1): Device(brand,price,size)
{
	this->size1 = size1;
	this->sympthoms = new char[size1];
	strcpy(this->sympthoms, sympthoms);
	this->repairDays = repairDays;
}
BrokenDevice::BrokenDevice(const BrokenDevice& other) : Device(other)
{
	size1 = other.size1;
	sympthoms = new char[strlen(other.sympthoms) + 1];
	strcpy(this->sympthoms, sympthoms);
	repairDays = other.repairDays;
}
BrokenDevice& BrokenDevice::operator=(const BrokenDevice& other)
{
	if (this != &other)
	{
		Device::operator=(other);
		delete[]sympthoms;
		size1 = other.size1;
		sympthoms = new char[strlen(other.sympthoms) + 1];
		strcpy(this->sympthoms, sympthoms);
		repairDays = other.repairDays;
	}
	return *this;
}
BrokenDevice::~BrokenDevice()
{
	delete[]sympthoms;
}
const char* BrokenDevice::getSympthoms()
{
	return this->sympthoms;
}
const unsigned BrokenDevice::getRepairDays()
{
	return this->repairDays;
}
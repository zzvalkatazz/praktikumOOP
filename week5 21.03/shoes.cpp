#include"Storage.h"
Storage::Storage(const int capacity)
{
	 storage = new Shoe[capacity];
}
Storage::~Storage()
{
	delete[]storage;
}

Storage::Storage(const Storage& other)
{
	this->storage = new Shoe[other.capacity];
	this->capacity = other.capacity;
	for

}
Storage& Storage::operator=(const Storage& other)
{
	if (this != &other)
	{

	}
	return*this;
}
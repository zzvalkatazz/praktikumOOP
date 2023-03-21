#ifndef  STORAGE_
#define STORAGE_
#include "Shoes.h"
class Storage
{
private:
	Shoe* storage;
	int capacity;
public:
	Storage(const int capacity);
	~Storage();
	Storage(const Storage& other);
	Storage();
	Storage& operator=(const Storage& other);
};

#endif
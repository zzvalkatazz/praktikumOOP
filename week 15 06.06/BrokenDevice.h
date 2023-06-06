#ifndef BROKENDEVICE_
#define BROKENDEVICE_
#include"Device.h"
class BrokenDevice : public Device
{
private:
	int size1;
	char* sympthoms;
	unsigned repairDays;
public:
	BrokenDevice(const char* brand, const double price, const char* sympthoms,const int size, const unsigned repairDays,const int size1);
	BrokenDevice(const BrokenDevice& other);
	BrokenDevice& operator=(const BrokenDevice& other);
	~BrokenDevice();
	const char* getSympthoms();
	const unsigned getRepairDays();
	void setSymptoms(char* sympthoms);
	void setRepairDays(unsigned repairDays);
	void input();
	void output();
};













#endif
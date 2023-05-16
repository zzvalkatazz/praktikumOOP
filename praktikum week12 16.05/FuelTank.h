#ifndef FUELTANK_
#define FUELTANK_
#include"Autopart.h"
template<typename T>
class FuelTank :public AutoPart
{
private:
	T fuelType;
	int volume;
public:
	FuelTank(T fuelType, int volume);
	void display()const override;
};









#endif

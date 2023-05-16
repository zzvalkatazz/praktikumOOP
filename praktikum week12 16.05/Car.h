#pragma once
#include"AutoPart.h"
class Car
{
private:
	AutoPart** parts;
	std::string model;
	std::string maker;
public:
	Car();
	Car(parts, model, maker);
	~Car(const Car& car);
};

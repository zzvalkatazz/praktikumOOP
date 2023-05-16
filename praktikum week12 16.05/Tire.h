#ifndef TIRE_H
#define TIRE_H
#include "AutoPart.h"
class Tire : public AutoPart
{
protected:
	int wide;
	int profile;
	int diameter;
public:
	Tire(const std::string& name, const std::string& manifacture, const int year,const int wide, const int profile, const int diameter);
	void  display() const override;
};
#endif
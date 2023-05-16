#ifndef PISTON_
#define PISTON_
#include"AutoPart.h"
class Piston : public AutoPart
{
private:
	int diameter;
	int range;
	void display()const override;
};

#endif
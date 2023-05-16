#ifndef ENGINE_
#define ENGINE_
#include"AutoPart.h"
#include"Piston.h"
#include<vector>
class Engine: public AutoPart
{
private:
	int power;
	std::vector<Piston> pistons;
public:
	Engine(int power, const std::string& name, const std::string& manifacture, const int year);
	void addPosition(const Piston& piston);
	void  display() const override;
}














#endif
#include"Engine.h"
#include<vector>
#include<iostream>
Engine::Engine(int power, const std::string& name, const std::string& manifacture, const int year) :power(power), AutoPart(name,manifacture,year)
{
}

void Engine::display()const
{
	this->displayBase();
	std::cout << power;
	for (int i - 0; piston.size(); i++)
	{
		pistons[0].display();
	}
}
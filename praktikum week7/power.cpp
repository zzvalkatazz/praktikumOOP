#include"power.h"
#include<string>
Power::Power(const std::string& name, int damage)
{
    this->damage = damage;
    this->name = name;
}
const std::string& Power::getName()
{
    return this->name;
}
int Power::getDamage()
{
    return this->damage;
}
const bool Power:: operator<(const Power& other)
{
    return this->damage < other.damage;
}

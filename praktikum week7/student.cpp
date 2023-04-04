#include"student.h"
#include"power.h"
Student::Student()
{
    power = { nullptr };
    health = 0;
}
Student::Student(const std::string& name)
{
    this->name = name;
    this->house = house;
    this->power = { nullptr };
    this->health = health;
}
const std::string& Student::getName()
{
    return this->name;
}
const std::string& Student::getHouse()
{
    return this->house;
}
void Student::setHouse(const std::string& house)
{
    this-> house = house;
}
int Student::getHealth()
{
    return this->health;
}
void Student::takeDamage(int damage)
{
    health -= damage;
    if (health < 0)
    {
        health = 0;
    }
}
void Student::setPower(const Power* power)
{
    this->power = power;
   
}
const Power* Student::getPower()
{
    return this->power;
}
bool Student::isAlive()
{
    if (health <= 0)
    {
        return false;
   }
    return true;
}
int Student::attack()
{
    return power->getDamage();
}

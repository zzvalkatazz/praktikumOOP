#include "Employee.h"
#include <iostream>
#include <iomanip>
Employee::Employee(const std::string& name, const double& salary) :mName(name), mSalary(salary)
{
}
double Employee::getSalary() const
{
    return this->mSalary;
}
std::string Employee::getName() const
{
    return this->mName;
}
std::ostream& operator<<(std::ostream& str, const Employee& obj)
{
    const Employee& ref = obj;
    str << obj;
 
}
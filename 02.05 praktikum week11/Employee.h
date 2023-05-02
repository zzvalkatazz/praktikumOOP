#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H

#include <string>
#include <vector>

class Employee
{
private:
    std::string mName;
  
    double mSalary;
public:
    Employee(const std::string& name, const double& salary);
    double getSalary() const;
    std::string getName() const;
    friend std::ostream& operator<<(std::ostream& str, const Employee& obj);
};

#endif
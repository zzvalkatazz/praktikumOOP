#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "Employee.h"
#include<string>
#include<vector>
class TeamLeader : protected Employee
{
private:
	void copy(const std::vector<Employee>& team1);
	void erase();
	std::vector<Employee> employee;
	std::string name;
public:
	
	TeamLeader(const std::string& name, std::vector<Employee*> team1,double salary);
	~TeamLeader();
    TeamLeader(const TeamLeader& other);
	TeamLeader& operator=(const TeamLeader& other);
	double getExpenses();
};











#endif
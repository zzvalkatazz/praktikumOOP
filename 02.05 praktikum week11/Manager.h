#pragma once

#include"Employee.h"
#include"TeamLeader.h"

#include<string>
#include<vector>
class Manager :public TeamLeader
{
	std::vector <TeamLeader> leader;
	std::string& name;
	double salary;
	Employee(const std::string& name,double salary,std::vector<Employee> team1)
};
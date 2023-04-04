#include"hogwarts.h"
Hogwarts::Hogwarts()
{
	this->maxStudents = maxStudents;
	this->current = current;
	students = new Student[maxStudents];
}
Hogwarts::Hogwarts(const Hogwarts& other)
{
	maxStudents = other.maxStudents;
	current = other.current;
	this->students = new Student[current];
	for (int i = 0; i < current; i++)
	{
		students[i] = other.students[i];
	}
}
Hogwarts::~Hogwarts()
{
	delete[]students;
}
Hogwarts& Hogwarts::operator=(const Hogwarts& other)
{
	if (this != &other)
	{
		delete[]students;
		maxStudents = other.maxStudents;
		current = other.current;
		this->students = new Student[current];
		for (int i = 0; i < current; i++)
		{
			students[i] = other.students[i];
		}
	}
	return *this;
}
Hogwarts::Hogwarts(Hogwarts&& other)
{
	students = other.students;
	this->maxStudents = other.maxStudents;
	this->current = other.current;
	other.students = nullptr;
	other.maxStudents = 0;
	other.current = 0;
}
Hogwarts& Hogwarts::operator=(Hogwarts&& other)
{
	if (this != &other)
	{
		delete[]students;
		students = other.students;
		this->maxStudents = other.maxStudents;
		this->current = other.current;
		other.students = nullptr;
		other.maxStudents = 0;
		other.current = 0;
	}
	return *this;
}
std::ostream& operator<<(std::ostream& out, const Hogwarts& hogwarts)
{
	for (size_t i = 0; i < hogwarts.current; i++)
	{
		out << hogwarts.students[i].getName() << "from:" << hogwarts.students[i].getName();
	}
}
void Hogwarts::addStudent(const Student& student)
{
	if (maxStudents == current + 1)
	{
		if (maxStudents != 0)
		{
			maxStudents *= 2;
		}
		else { maxStudents = 2; }
		Student* copy - new student[maxStudents];
		for (int i = 0; i < current; i++)
		{
			copy[i] = students[i];
		}
		delete this->students;
		this->students = copy;
	}
	students[current++] = students;
}

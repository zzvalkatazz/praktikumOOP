#ifndef AUTOPART_
#define AUTOPART_
#include<string>
class AutoPart
{
private:
	std::string name;
	std::string manifacture;
	int year;
	int serialNum;
	static int countParts;
protected:
	void displayBase() const;
public:
	static int getPartsCount();
	virtual void display() const;
	AutoPart(const std::string& name, const std::string& manifacture, const int year);
	 virtual ~AutoPart()=default;
};



















#endif

#include "AutoPart.h"
int AutoPart::countParts = 0;

AutoPart::AutoPart(const std::string& name, const std::string& manifacture, const int year) : name(name), manifacture(manifacture), year(year)
{
	serialNum = countParts;
	countParts++;
}
AutoPart::~AutoPart()
{
}
int AutoPart::getPartsCount()
{
	return countParts;
}
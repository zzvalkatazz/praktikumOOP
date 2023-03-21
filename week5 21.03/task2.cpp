#include<iostream>
#include<fstream>
int main()
{
	std::ifstream myFile;
	myFile.open("source.cpp");
	if (!myFile)
	{
		throw std::exception();
	}
	while (myFile)
	{
		char curr;
		myFile.get(curr);
		std::cout << curr;
	}
	myFile.close();
}
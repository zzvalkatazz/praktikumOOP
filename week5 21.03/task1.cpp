#include<iostream>
#include<fstream>

int getFileSize(std::ifstream& file)
{
	int currentPos = file.tellg();
	file.seekg(0, std::ios::end);
	int fileSize = file.tellg();
	file.seekg(currentPos);
	return fileSize;
}
int main()
{
	std::ifstream fileTask;
	fileTask.open("file.txt");
	getFileSize(fileTask);
	fileTask.close();

}
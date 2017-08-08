#include <iostream>
#include <fstream>
#include <string>

int CountStrings(std::string FileName)
{
	int NumberOfStrings = 0;
	std::string BuffString; 
	std::ifstream File(FileName);

	if (!File.is_open())
	{
		return -1; // File can not be opened/Wrong path
	}

	while (!File.eof())
	{
		std::getline(File, BuffString);
		NumberOfStrings++;
	}
	File.close();
	return NumberOfStrings;
}

int main()
{
	std::string FileName;
	std::cout << "Path: ";
	std::cin >> FileName;
	std::cout << CountStrings(FileName) << std::endl;
	system("pause");
	return 0;
}

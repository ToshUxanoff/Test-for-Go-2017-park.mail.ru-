#include <iostream>
#include <fstream>
#include <string>

int CountingLines(std::string FileName)
{
	int NumberOfStrings = 0;
	std::string BuffString; 
	std::ifstream File(FileName);
	if (File.is_open())
	{
		while (!File.eof())
		{
			std::getline(File, BuffString);
			NumberOfStrings++;
		}
		File.close();
		return NumberOfStrings;
	}
	return -1; // File can not be opened
}

int main()
{
	std::string FileName;
	std::cout << "Name of file: ";
	std::cin >> FileName;
	std::cout << CountingLines(FileName) << std::endl;
	system("pause");
	return 0;
}

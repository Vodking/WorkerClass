#include "Starter.hpp"

void ReadFile()
{
	int lineCounter = 1;
	std::ifstream fileOut;
	std::string line;
	fileOut.open("WorkersData.txt");
	while (!fileOut.eof())
	{
		std::getline(fileOut, line);
		if (lineCounter == 1)
		{
			std::cout << "\n��� �������: ";
		}
		else if (lineCounter == 2)
		{
			std::cout << "����: ";
		}
		else if (lineCounter == 3)
		{
			std::cout << "�������� � ���: ";
		}
		else if (lineCounter == 4)
		{
			std::cout << "���-�� ����� � �����: ";
		}
		else if (lineCounter == 5)
		{
			std::cout << "������ ��: ";
		}
		else if (lineCounter == 6)
		{
			std::cout << "�� � �������: ";
		}
		lineCounter++;
		std::cout << line<< '\n';
		if (lineCounter == 7)
		{
			lineCounter = 1;
		}
			
		

	}
}

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
			std::cout << "\nИмя Фамилия: ";
		}
		else if (lineCounter == 2)
		{
			std::cout << "Стаж: ";
		}
		else if (lineCounter == 3)
		{
			std::cout << "Зарплата в час: ";
		}
		else if (lineCounter == 4)
		{
			std::cout << "Кол-во часов в месяц: ";
		}
		else if (lineCounter == 5)
		{
			std::cout << "Чистая Зп: ";
		}
		else if (lineCounter == 6)
		{
			std::cout << "Зп с премией: ";
		}
		lineCounter++;
		std::cout << line<< '\n';
		if (lineCounter == 7)
		{
			lineCounter = 1;
		}
			
		

	}
}

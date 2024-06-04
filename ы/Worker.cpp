
#include "Worker.hpp"

void Worker::InputInfo()
{
	std::cout << "Введите имя и фамилию: ";
	std::getline(std::cin, name);
	std::cout << "Введите стаж: ";
	std::cin >> stag;
	std::cout << "Введите часовую зп: ";
	std::cin >> hourCash;
	std::cout << "Введите кол-во часов за месяц: ";
	std::cin >> hours;
	std::cin.ignore(32000, '\n');
}

void Worker::PrintInfo()
{
	if (stag > 0 || stag <= 0)
	{
		std::cout << "\nИмя Фамилия: " << name;
		std::cout << "\nСтаж: " << stag;
		std::cout << "\nЧасовая зп: " << hourCash;
		std::cout << "\nЧасы за месяц: " << hours;
		std::cout << "\nЧистая зп: " << Salary();
		std::cout << "\nзп с учётом премии: " << SalaryWithPrem();
	}
	else
	{
		std::cerr << "Error:No Data";
	}
	
}

int Worker::Salary()
{
	return hours * hourCash;
}

int Worker::SalaryWithPrem()
{
	float total;
	if (stag > 1)
	{
		total = Salary() * 1.05;
	}
	else if (stag > 3)
	{
		total = Salary() * 1.08;
	}
	else if (stag > 5)
	{
		total = Salary() * 1.15;
	}
	else
	{
		total = Salary();
	}
	return total;
}

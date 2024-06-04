
#include "Worker.hpp"

void Worker::InputInfo()
{
	std::cout << "������� ��� � �������: ";
	std::getline(std::cin, name);
	std::cout << "������� ����: ";
	std::cin >> stag;
	std::cout << "������� ������� ��: ";
	std::cin >> hourCash;
	std::cout << "������� ���-�� ����� �� �����: ";
	std::cin >> hours;
	std::cin.ignore(32000, '\n');
}

void Worker::PrintInfo()
{
	if (stag > 0 || stag <= 0)
	{
		std::cout << "\n��� �������: " << name;
		std::cout << "\n����: " << stag;
		std::cout << "\n������� ��: " << hourCash;
		std::cout << "\n���� �� �����: " << hours;
		std::cout << "\n������ ��: " << Salary();
		std::cout << "\n�� � ������ ������: " << SalaryWithPrem();
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

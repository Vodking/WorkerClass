#ifndef WORKER_HPP
#define WORKER_HPP
#include "Starter.hpp"

class Worker
{
public:
	std::string name;

	int stag;
	int hourCash;
	int hours;

	void InputInfo();
	void PrintInfo();
	
private:
	int Salary();
	int SalaryWithPrem();

};


#endif // !WORKER_HPP



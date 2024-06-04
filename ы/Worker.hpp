#ifndef WORKER_HPP
#define WORKER_HPP
#include "Starter.hpp"

class Worker
{
public:
	void InputInfo();
	void PrintInfo();
	
private:

	std::string name;

	int stag;
	int hourCash;
	int hours;
	int Salary();
	int SalaryWithPrem();

};


#endif // !WORKER_HPP



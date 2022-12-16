#pragma once
#include <vector>
#include <string>
class CalculatorProcessor
{
private:
	static CalculatorProcessor* _processor;
	std::vector<std::string> _math;
	CalculatorProcessor();
public:
	CalculatorProcessor();
};


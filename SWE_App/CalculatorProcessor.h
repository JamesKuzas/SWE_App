#pragma once
#include <vector>
#include <string>
class CalculatorProcessor
{
private:
	static CalculatorProcessor* _processor;
	CalculatorProcessor() {}
public:
	static CalculatorProcessor* GetInstance();
	void DoMath(std::string _math);
	
};


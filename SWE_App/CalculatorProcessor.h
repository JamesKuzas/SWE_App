#pragma once
#include <vector>
#include <string>
class CalculatorProcessor
{
private:
	static CalculatorProcessor* _processor;
	std::vector<std::string> v1;
	std::vector<std::string> tokenz;
	std::string blank = "";
	CalculatorProcessor() {}
public:
	static CalculatorProcessor* GetInstance();
	void DoMath(std::string _math);
	float Pemdas(std::vector<std::string>_vector);
	std::string nums;
	std::string variabls;
	float answer;
	
};


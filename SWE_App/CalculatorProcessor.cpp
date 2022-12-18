#include "CalculatorProcessor.h"
CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (_processor == nullptr) 
	{
		_processor = new CalculatorProcessor;
	}
	return _processor;
}

void CalculatorProcessor::DoMath(std::string _math)
{
	
	
	for (int i = 0; i < _math.length(); i++)
	{
		if (_math[i] == '*' || _math[i] == '/' || _math[i] == '-' || _math[i] == '+')
		{
			tokenz.push_back(nums);
			nums.clear();
			variabls.push_back(_math[i]);
			tokenz.push_back(variabls);
			variabls.clear();
			
		}
		else
		{
			nums.push_back(_math[i]);
		}
	}
}

float CalculatorProcessor::Pemdas(std::vector<std::string> _vector)
{
	for (int i = 0; i < _vector.size(); i++)
	{
		
	}
	
	return answer;
}


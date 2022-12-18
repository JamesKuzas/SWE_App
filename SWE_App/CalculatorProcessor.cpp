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
	std::string nums;
	std::string variabls;
	for (int i = 0; i < _math.size(); i++)
	{
		if (_math.find("*") != std::string::npos || _math.find("/") != std::string::npos)
		{

		}
		else if (_math.find("*") != std::string::npos || _math.find("/") != std::string::npos)
		{

		}
		else
		{

		}
	}








	if (_math.find("+") != std::string::npos)
	{
		int pos = _math.find("+");
		// Left sub string 
		std::string plusleft;
		// Right sub string
		std::string plusright;
		// call DoMath on left and right
		DoMath(plusleft);
		DoMath(plusright);
		//left + right
		//return awnser as string
	}
	if (_math.find("-") != std::string::npos)
	{
		int pos = _math.find("-");
		// Left sub string 
		std::string minusleft;
		// Right sub string
		std::string minusright;
		// call DoMath on left and right
		DoMath(minusleft);
		DoMath(minusright);
		//left + right
		//return awnser as string
	}

	if (_math.find("*") != std::string::npos)
	{
		int pos = _math.find("*");
		// Left sub string 
		std::string multileft;
		// Right sub string
		std::string multiright;
		// call DoMath on left and right
		DoMath(multileft);
		DoMath(multiright);
		//left + right
		//return awnser as string
	}

	if (_math.find("/") != std::string::npos)
	{
		int pos = _math.find("/");
		// Left sub string 
		std::string divleft;
		// Right sub string
		std::string divright;
		// call DoMath on left and right
		DoMath(divleft);
		DoMath(divright);
		//left + right
		//return awnser as string
	}

}


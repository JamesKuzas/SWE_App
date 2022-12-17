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

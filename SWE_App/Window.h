#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

class Window :public wxFrame
{
	ButtonFactory* factory = new ButtonFactory();

	wxButton* nineButton = nullptr;
	wxButton* eightButton = nullptr;
	wxButton* sevenButton = nullptr;
	wxButton* sixButton = nullptr;
	wxButton* fiveButton = nullptr;
	wxButton* fourButton = nullptr;
	wxButton* threeButton = nullptr;
	wxButton* twoButton = nullptr;
	wxButton* oneButton = nullptr;
	wxButton* zeroButton = nullptr;
	wxButton* cosButton = nullptr;
	wxButton* sinButton = nullptr;
	wxButton* tanButton = nullptr;
	wxButton* clearButton = nullptr;
	wxButton* backButton = nullptr;
	wxButton* divideButton = nullptr;
	wxButton* multiButton = nullptr;
	wxButton* minusButton = nullptr;
	wxButton* plusButton = nullptr;
	wxButton* equalButton = nullptr;
	wxButton* modButton = nullptr;
	wxButton* dotButton = nullptr;
	wxTextCtrl* textBox = nullptr;

	CalculatorProcessor* c1 = CalculatorProcessor::GetInstance();
	
	float f = false;
	float answer = NULL;
	float first = NULL;
	float second = NULL;
	bool mod = false;
	bool plus = false;
	bool minus = false;
	bool divide = false;
	bool multiply = false;
	wxString value = "";
	std::string conversion = "";
	wxString answerString;
	std::vector<std::string> vect;
	std::string dude = "";
	

public:
	Window();
	void OnButtonClick(wxCommandEvent& evt);
	float CosProblem(float _value);
	float SinProblem(float _value);
	float TanProblem(float _value);
	
	wxDECLARE_EVENT_TABLE();
};


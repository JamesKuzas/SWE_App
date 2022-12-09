#pragma once
#include "wx/wx.h"


class Window :public wxFrame
{
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
	wxButton* reverseButton = nullptr;
	wxButton* dotButton = nullptr;
	wxTextCtrl* textBox = nullptr;



public:
	Window();
};


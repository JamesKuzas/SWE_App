#pragma once
#include "wx/wx.h"

class ButtonFactory :public wxFrame
{
	wxButton* nineBUtton = nullptr;
	wxButton* eightBUtton = nullptr;
	wxButton* sevenBUtton = nullptr;
	wxButton* sixBUtton = nullptr;
	wxButton* fiveBUtton = nullptr;
	wxButton* fourBUtton = nullptr;
	wxButton* threeBUtton = nullptr;
	wxButton* twoBUtton = nullptr;
	wxButton* oneBUtton = nullptr;
	wxButton* zeroBUtton = nullptr;
	wxButton* cosBUtton = nullptr;
	wxButton* sinBUtton = nullptr;
	wxButton* tanBUtton = nullptr;
	wxButton* clearBUtton = nullptr;
	wxButton* backBUtton = nullptr;
	wxButton* divideBUtton = nullptr;
	wxButton* multiBUtton = nullptr;
	wxButton* minusBUtton = nullptr;
	wxButton* plusBUtton = nullptr;
	wxButton* equalBUtton = nullptr;
	wxButton* modBUtton = nullptr;
	wxButton* dotBUtton = nullptr;
	wxTextCtrl* textBoX = nullptr;
	
public:
	ButtonFactory();
	wxButton* NineButton();
	wxButton* EightButton();
	wxButton* SevenButton();
	wxButton* SixButton();
	wxButton* FiveButton();
	wxButton* FourButton();
	wxButton* ThreeButton();
	wxButton* TwoButton();
	wxButton* OneButton();
	wxButton* ZeroButton();
	wxButton* CosButton();
	wxButton* SinButton();
	wxButton* TanButton();
	wxButton* ClearButton();
	wxButton* BackButton();
	wxButton* DivideButton();
	wxButton* MultiButton();
	wxButton* MinusButton();
	wxButton* PlusButton();
	wxButton* EqualButton();
	wxButton* ModButton();
	wxButton* DotButton();
	wxTextCtrl* TextBox();
};


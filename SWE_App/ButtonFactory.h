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
	wxButton* NineButton(wxFrame* _parent);
	wxButton* EightButton(wxFrame* _parent);
	wxButton* SevenButton(wxFrame* _parent);
	wxButton* SixButton(wxFrame* _parent);
	wxButton* FiveButton(wxFrame* _parent);
	wxButton* FourButton(wxFrame* _parent);
	wxButton* ThreeButton(wxFrame* _parent);
	wxButton* TwoButton(wxFrame* _parent);
	wxButton* OneButton(wxFrame* _parent);
	wxButton* ZeroButton(wxFrame* _parent);
	wxButton* CosButton(wxFrame* _parent);
	wxButton* SinButton(wxFrame* _parent);
	wxButton* TanButton(wxFrame* _parent);
	wxButton* ClearButton(wxFrame* _parent);
	wxButton* BackButton(wxFrame* _parent);
	wxButton* DivideButton(wxFrame* _parent);
	wxButton* MultiButton(wxFrame* _parent);
	wxButton* MinusButton(wxFrame* _parent);
	wxButton* PlusButton(wxFrame* _parent);
	wxButton* EqualButton(wxFrame* _parent);
	wxButton* ModButton(wxFrame* _parent);
	wxButton* DotButton(wxFrame* _parent);
};


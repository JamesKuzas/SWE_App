#include "ButtonFactory.h"

ButtonFactory::ButtonFactory():
	wxFrame(nullptr, 0, "Calculator", wxPoint(400, 200), wxSize(400, 460))
{
	textBox = new wxTextCtrl(this, 23, "", wxPoint(0, 0), wxSize(400, 55));

	cosButton = new wxButton(this, 1, "Cos", wxPoint(0, 60), wxSize(70, 55));
	sinButton = new wxButton(this, 2, "Sin", wxPoint(75, 60), wxSize(70, 55));
	tanButton = new wxButton(this, 3, "Tan", wxPoint(150, 60), wxSize(70, 55));
	clearButton = new wxButton(this, 4, "C", wxPoint(225, 60), wxSize(70, 55));
	backButton = new wxButton(this, 5, "<x", wxPoint(310, 60), wxSize(60, 55));

	sevenButton = new wxButton(this, 6, "7", wxPoint(0, 125), wxSize(95, 65));
	eightButton = new wxButton(this, 7, "8", wxPoint(100, 125), wxSize(95, 65));
	nineButton = new wxButton(this, 8, "9", wxPoint(200, 125), wxSize(95, 65));
	divideButton = new wxButton(this, 9, "/", wxPoint(310, 125), wxSize(60, 55));

	fourButton = new wxButton(this, 10, "4", wxPoint(0, 195), wxSize(95, 65));
	fiveButton = new wxButton(this, 11, "5", wxPoint(100, 195), wxSize(95, 65));
	sixButton = new wxButton(this, 12, "6", wxPoint(200, 195), wxSize(95, 65));
	multiButton = new wxButton(this, 13, "x", wxPoint(310, 185), wxSize(60, 55));

	oneButton = new wxButton(this, 14, "1", wxPoint(0, 265), wxSize(95, 65));
	twoButton = new wxButton(this, 15, "2", wxPoint(100, 265), wxSize(95, 65));
	threeButton = new wxButton(this, 16, "3", wxPoint(200, 265), wxSize(95, 65));
	minusButton = new wxButton(this, 17, "-", wxPoint(310, 245), wxSize(60, 55));

	modButton = new wxButton(this, 18, "Mod", wxPoint(0, 335), wxSize(95, 65));
	zeroButton = new wxButton(this, 19, "0", wxPoint(100, 335), wxSize(95, 65));
	dotButton = new wxButton(this, 20, ".", wxPoint(200, 335), wxSize(95, 65));
	equalButton = new wxButton(this, 21, "=", wxPoint(310, 365), wxSize(60, 55));
	plusButton = new wxButton(this, 22, "+", wxPoint(310, 305), wxSize(60, 55));
}

wxButton* ButtonFactory::NineButton()
{
	return nineButton;
}

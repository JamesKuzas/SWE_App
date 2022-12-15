#include "ButtonFactory.h"

ButtonFactory::ButtonFactory():
	wxFrame(nullptr, 0, "Calculator", wxPoint(400, 200), wxSize(400, 460))
{
	textBoX = new wxTextCtrl(this, 23, "", wxPoint(0, 0), wxSize(400, 55));

	cosBUtton = new wxButton(this, 1, "Cos", wxPoint(0, 60), wxSize(70, 55));
	sinBUtton = new wxButton(this, 2, "Sin", wxPoint(75, 60), wxSize(70, 55));
	tanBUtton = new wxButton(this, 3, "Tan", wxPoint(150, 60), wxSize(70, 55));
	clearBUtton = new wxButton(this, 4, "C", wxPoint(225, 60), wxSize(70, 55));
	backBUtton = new wxButton(this, 5, "<x", wxPoint(310, 60), wxSize(60, 55));

	sevenBUtton = new wxButton(this, 6, "7", wxPoint(0, 125), wxSize(95, 65));
	eightBUtton = new wxButton(this, 7, "8", wxPoint(100, 125), wxSize(95, 65));
	nineBUtton = new wxButton(this, 8, "9", wxPoint(200, 125), wxSize(95, 65));
	divideBUtton = new wxButton(this, 9, "/", wxPoint(310, 125), wxSize(60, 55));

	fourBUtton = new wxButton(this, 10, "4", wxPoint(0, 195), wxSize(95, 65));
	fiveBUtton = new wxButton(this, 11, "5", wxPoint(100, 195), wxSize(95, 65));
	sixBUtton = new wxButton(this, 12, "6", wxPoint(200, 195), wxSize(95, 65));
	multiBUtton = new wxButton(this, 13, "x", wxPoint(310, 185), wxSize(60, 55));

	oneBUtton = new wxButton(this, 14, "1", wxPoint(0, 265), wxSize(95, 65));
	twoBUtton = new wxButton(this, 15, "2", wxPoint(100, 265), wxSize(95, 65));
	threeBUtton = new wxButton(this, 16, "3", wxPoint(200, 265), wxSize(95, 65));
	minusBUtton = new wxButton(this, 17, "-", wxPoint(310, 245), wxSize(60, 55));

	modBUtton = new wxButton(this, 18, "Mod", wxPoint(0, 335), wxSize(95, 65));
	zeroBUtton = new wxButton(this, 19, "0", wxPoint(100, 335), wxSize(95, 65));
	dotBUtton = new wxButton(this, 20, ".", wxPoint(200, 335), wxSize(95, 65));
	equalBUtton = new wxButton(this, 21, "=", wxPoint(310, 365), wxSize(60, 55));
	plusBUtton = new wxButton(this, 22, "+", wxPoint(310, 305), wxSize(60, 55));
}

std::vector<wxButton*> ButtonFactory::Buttons()
{
	std::vector<wxButton*> v;
	v.push_back(nineBUtton);
	v.push_back(eightBUtton);
	v.push_back(sevenBUtton);
	v.push_back(sixBUtton);
	v.push_back(fiveBUtton);
	v.push_back(fourBUtton);
	v.push_back(threeBUtton);
	v.push_back(twoBUtton);
	v.push_back(oneBUtton);
	v.push_back(zeroBUtton);
	v.push_back(cosBUtton);
	v.push_back(tanBUtton);
	v.push_back(sinBUtton);
	v.push_back(clearBUtton);
	v.push_back(backBUtton);
	v.push_back(divideBUtton);
	v.push_back(multiBUtton);
	v.push_back(minusBUtton);
	v.push_back(plusBUtton);
	v.push_back(equalBUtton);
	v.push_back(modBUtton);
	v.push_back(dotBUtton);
	return v;
}

wxButton* ButtonFactory::NineButton()
{
	return nineBUtton;
}

wxButton* ButtonFactory::EightButton()
{
	return eightBUtton;
}

wxButton* ButtonFactory::SevenButton()
{
	return sevenBUtton;
}

wxButton* ButtonFactory::SixButton()
{
	return sixBUtton;
}

wxButton* ButtonFactory::FiveButton()
{
	return fiveBUtton;
}

wxButton* ButtonFactory::FourButton()
{
	return fourBUtton;
}

wxButton* ButtonFactory::ThreeButton()
{
	return threeBUtton;
}

wxButton* ButtonFactory::TwoButton()
{
	return twoBUtton;
}

wxButton* ButtonFactory::OneButton()
{
	return oneBUtton;
}

wxButton* ButtonFactory::ZeroButton()
{
	return zeroBUtton;
}

wxButton* ButtonFactory::CosButton()
{
	return cosBUtton;
}

wxButton* ButtonFactory::SinButton()
{
	return sinBUtton;
}

wxButton* ButtonFactory::TanButton()
{
	return tanBUtton;
}

wxButton* ButtonFactory::ClearButton()
{
	return clearBUtton;
}

wxButton* ButtonFactory::BackButton()
{
	return backBUtton;
}

wxButton* ButtonFactory::DivideButton()
{
	return divideBUtton;
}

wxButton* ButtonFactory::MultiButton()
{
	return multiBUtton;
}

wxButton* ButtonFactory::MinusButton()
{
	return minusBUtton;
}

wxButton* ButtonFactory::PlusButton()
{
	return plusBUtton;
}

wxButton* ButtonFactory::EqualButton()
{
	return equalBUtton;
}

wxButton* ButtonFactory::ModButton()
{
	return modBUtton;
}

wxButton* ButtonFactory::DotButton()
{
	return dotBUtton;
}

wxTextCtrl* ButtonFactory::TextBox()
{
	return textBoX;
}


#include "ButtonFactory.h"

ButtonFactory::ButtonFactory():
	wxFrame(nullptr, 0, "Calculator", wxPoint(400, 200), wxSize(400, 460))
{
	
}

wxButton* ButtonFactory::NineButton(wxFrame* _parent)
{
	return new wxButton(_parent, 8, "9", wxPoint(200, 125), wxSize(95, 65));
}

wxButton* ButtonFactory::EightButton(wxFrame* _parent)
{
	return new wxButton(_parent, 7, "8", wxPoint(100, 125), wxSize(95, 65));
}

wxButton* ButtonFactory::SevenButton(wxFrame* _parent)
{
	return new wxButton(_parent, 6, "7", wxPoint(0, 125), wxSize(95, 65));
}

wxButton* ButtonFactory::SixButton(wxFrame* _parent)
{
	return new wxButton(_parent, 12, "6", wxPoint(200, 195), wxSize(95, 65));
}

wxButton* ButtonFactory::FiveButton(wxFrame* _parent)
{
	return new wxButton(_parent, 11, "5", wxPoint(100, 195), wxSize(95, 65));
}

wxButton* ButtonFactory::FourButton(wxFrame* _parent)
{
	return new wxButton(_parent, 10, "4", wxPoint(0, 195), wxSize(95, 65));
}

wxButton* ButtonFactory::ThreeButton(wxFrame* _parent)
{
	return new wxButton(_parent, 16, "3", wxPoint(200, 265), wxSize(95, 65));
}

wxButton* ButtonFactory::TwoButton(wxFrame* _parent)
{
	return new wxButton(_parent, 15, "2", wxPoint(100, 265), wxSize(95, 65));
}

wxButton* ButtonFactory::OneButton(wxFrame* _parent)
{
	return new wxButton(_parent, 14, "1", wxPoint(0, 265), wxSize(95, 65));
}

wxButton* ButtonFactory::ZeroButton(wxFrame* _parent)
{
	return new wxButton(_parent, 19, "0", wxPoint(100, 335), wxSize(95, 65));
}

wxButton* ButtonFactory::CosButton(wxFrame* _parent)
{
	return new wxButton(_parent, 1, "Cos", wxPoint(0, 60), wxSize(70, 55));
}

wxButton* ButtonFactory::SinButton(wxFrame* _parent)
{
	return new wxButton(_parent, 2, "Sin", wxPoint(75, 60), wxSize(70, 55));
}

wxButton* ButtonFactory::TanButton(wxFrame* _parent)
{
	return new wxButton(_parent, 3, "Tan", wxPoint(150, 60), wxSize(70, 55));
}

wxButton* ButtonFactory::ClearButton(wxFrame* _parent)
{
	return new wxButton(_parent, 4, "C", wxPoint(225, 60), wxSize(70, 55));
}

wxButton* ButtonFactory::BackButton(wxFrame* _parent)
{
	return new wxButton(_parent, 5, "<x", wxPoint(310, 60), wxSize(60, 55));
}

wxButton* ButtonFactory::DivideButton(wxFrame* _parent)
{
	return new wxButton(_parent, 9, "/", wxPoint(310, 125), wxSize(60, 55));
}

wxButton* ButtonFactory::MultiButton(wxFrame* _parent)
{
	return new wxButton(_parent, 13, "x", wxPoint(310, 185), wxSize(60, 55));
}

wxButton* ButtonFactory::MinusButton(wxFrame* _parent)
{
	return new wxButton(_parent, 17, "-", wxPoint(310, 245), wxSize(60, 55));
}

wxButton* ButtonFactory::PlusButton(wxFrame* _parent)
{
	return new wxButton(_parent, 22, "+", wxPoint(310, 305), wxSize(60, 55));
}

wxButton* ButtonFactory::EqualButton(wxFrame* _parent)
{
	return new wxButton(_parent, 21, "=", wxPoint(310, 365), wxSize(60, 55));
}

wxButton* ButtonFactory::ModButton(wxFrame* _parent)
{
	return new wxButton(_parent, 18, "Mod", wxPoint(0, 335), wxSize(95, 65));
}

wxButton* ButtonFactory::DotButton(wxFrame* _parent)
{
	return new wxButton(_parent, 20, ".", wxPoint(200, 335), wxSize(95, 65));
}




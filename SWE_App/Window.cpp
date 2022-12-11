#include "Window.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)

EVT_BUTTON(1, Window::OnButtonClick)
EVT_BUTTON(2, Window::OnButtonClick)
EVT_BUTTON(3, Window::OnButtonClick)
EVT_BUTTON(4, Window::OnButtonClick)
EVT_BUTTON(5, Window::OnButtonClick)
EVT_BUTTON(6, Window::OnButtonClick)
EVT_BUTTON(7, Window::OnButtonClick)
EVT_BUTTON(8, Window::OnButtonClick)
EVT_BUTTON(9, Window::OnButtonClick)
EVT_BUTTON(10, Window::OnButtonClick)
EVT_BUTTON(11, Window::OnButtonClick)
EVT_BUTTON(12, Window::OnButtonClick)
EVT_BUTTON(13, Window::OnButtonClick)
EVT_BUTTON(14, Window::OnButtonClick)
EVT_BUTTON(15, Window::OnButtonClick)
EVT_BUTTON(16, Window::OnButtonClick)
EVT_BUTTON(17, Window::OnButtonClick)
EVT_BUTTON(18, Window::OnButtonClick)
EVT_BUTTON(19, Window::OnButtonClick)
EVT_BUTTON(20, Window::OnButtonClick)
EVT_BUTTON(21, Window::OnButtonClick)
EVT_BUTTON(22, Window::OnButtonClick)

wxEND_EVENT_TABLE()

Window::Window() : 
	wxFrame(nullptr, 0, "Calculator", wxPoint(400,200), wxSize(400,460))
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

	reverseButton = new wxButton(this, 18, "+/-", wxPoint(0, 335), wxSize(95, 65));
	zeroButton = new wxButton(this, 19, "0", wxPoint(100, 335), wxSize(95, 65));
	dotButton = new wxButton(this, 20, ".", wxPoint(200, 335), wxSize(95, 65));
	equalButton = new wxButton(this, 21, "=", wxPoint(310, 365), wxSize(60, 55));
	plusButton = new wxButton(this, 22, "+", wxPoint(310, 305), wxSize(60, 55));

}

void Window::OnButtonClick(wxCommandEvent& evt)
{
	int id = evt.GetId();
	switch (id)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4://CLEAR
		textBox->Clear();
		value.Clear();
		answerString.Clear();
		break;
	case 5:
		
		break;
	case 6:
		textBox->AppendText("7");
		break;
	case 7:
		textBox->AppendText("8");
		break;
	case 8:
		textBox->AppendText("9");
		break;
	case 9://Divide
		divide = true;
		value = textBox->GetValue();
		first = wxAtof(value);
		value = "";
		textBox->Clear();
		break;
	case 10:
		textBox->AppendText("4");
		break;
	case 11:
		textBox->AppendText("5");
		break;
	case 12:
		textBox->AppendText("6");
		break;
	case 13://Multiply
		multiply = true;
		value = textBox->GetValue();
		first = wxAtof(value);
		value = "";
		textBox->Clear();
		break;
	case 14:
		textBox->AppendText("1");
		break;
	case 15:
		textBox->AppendText("2");
		break;
	case 16:
		textBox->AppendText("3");
		break;
	case 17://Subtract
		minus = true;
		value = textBox->GetValue();
		first = wxAtof(value);
		value = "";
		textBox->Clear();
		break;

	case 18:
		break;
	case 19:
		textBox->AppendText("0");
		break;
	case 20:
		break;
	case 21:// Equal
		value = textBox->GetValue();
		second = wxAtof(value);
		answer = 0;
		if (plus == true)
		{
			answer = first + second;
			answerString << answer;
			textBox->Clear();
			textBox->AppendText(answerString);
			value.Clear();
			answerString.Clear();
			first = NULL;
			second = NULL;
			plus = false;
		}
		if (minus == true)
		{
			answer = first - second;
			answerString << answer;
			textBox->Clear();
			textBox->AppendText(answerString);
			value.Clear();
			answerString.Clear();
			first = NULL;
			second = NULL;
			minus = false;
		}
		if (multiply == true)
		{
			answer = first * second;
			answerString << answer;
			textBox->Clear();
			textBox->AppendText(answerString);
			value.Clear();
			answerString.Clear();
			first = NULL;
			second = NULL;
			multiply = false;
		}
		if (divide == true)
		{
			answer = first / second;
			answerString << answer;
			textBox->Clear();
			textBox->AppendText(answerString);
			value.Clear();
			answerString.Clear();
			first = NULL;
			second = NULL;
			divide = false;
		}
		
		break;
	case 22://ADD
		plus = true;
		value = textBox->GetValue();
		first = wxAtof(value);
		value = "";
		textBox->Clear();
		break;
	default:
		break;
	}
}

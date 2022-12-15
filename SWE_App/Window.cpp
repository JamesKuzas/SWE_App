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
	textBox = factory->TextBox();
	nineButton = factory->NineButton();
	
}

void Window::OnButtonClick(wxCommandEvent& evt)
{
	int id = evt.GetId();
	switch (id)
	{
	case 1://Cos
		value = textBox->GetValue();
		first = wxAtof(value);
		answer = CosProblem(first);
		answerString << answer;
		textBox->Clear();
		textBox->AppendText(answerString);
		break;
	case 2://Sin
		value = textBox->GetValue();
		first = wxAtof(value);
		answer = SinProblem(first);
		answerString << answer;
		textBox->Clear();
		textBox->AppendText(answerString);
		break;
	case 3://Tan
		value = textBox->GetValue();
		first = wxAtof(value);
		answer = TanProblem(first);
		answerString << answer;
		textBox->Clear();
		textBox->AppendText(answerString);
		break;
	case 4://CLEAR
		textBox->Clear();
		value.Clear();
		answerString.Clear();
		break;
	case 5://BackButton
		value = textBox->GetValue();
		value.RemoveLast();
		textBox->Clear();
		textBox->AppendText(value);
		
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

	case 18://Mod

		break;
	case 19:
		textBox->AppendText("0");
		break;
	case 20://Dot
		textBox->AppendText(".");
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

float Window::CosProblem(float _value)
{
	float c = cos(_value);
	return c;
}

float Window::SinProblem(float _value)
{
	float s = sin(_value);
	return s;
}

float Window::TanProblem(float _value)
{
	float t = tan(_value);
	return t;
}

#include "CalcApp.h"

wxIMPLEMENT_APP(CalcApp);

bool CalcApp::OnInit()
{
	window = new Window();
	window->Show();
	return true;
}

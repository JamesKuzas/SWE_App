#include "App.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	window = new Window();
	window->Show();
	return true;
}

#pragma once
#include "wx\wx.h"
#include "Window.h"


class App : public wxApp
{
	Window* window = nullptr;
	//are the pushes working correctly?
public:
	virtual bool OnInit();
};


#pragma once
#include "wx\wx.h"
#include "Window.h"


class App : public wxApp
{
	Window* window = nullptr;

public:
	virtual bool OnInit();
};


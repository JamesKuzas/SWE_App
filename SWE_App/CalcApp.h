#pragma once
#include "wx\wx.h"
#include "Window.h"


class CalcApp : public wxApp
{
	Window* window = nullptr;

public:
	virtual bool OnInit();
};


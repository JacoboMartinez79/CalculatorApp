#pragma once
#include"wx/wx.h"

class ICommand
{
public:
	virtual wxString Execute() = 0;
};

#pragma once


class ICommand
{
public:
	virtual wxString Execute() = 0;
};

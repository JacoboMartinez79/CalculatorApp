#pragma once
#include "ICommand.h"
#include <string>

class SubtractCommand : public ICommand
{

public:
	SubtractCommand() {};
	int _num1;
	int _num2;
	void setNum1(int num1)
	{
		_num1 = num1;
	}
	void setNum2(int num2)
	{
		_num2 = num2;
	}

	std::string DoSubtraction(int _num1, int _num2)
	{
		std::string sub = std::to_string(_num1 - _num2);

		return sub;
	}
	wxString Execute()
	{
		std::string Result = DoSubtraction(_num1, _num2);
		return Result;
	}
};

#pragma once
#include "ICommand.h"
#include <string>


class DivideCommand : public ICommand
{
public:

	DivideCommand() {};
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
	std::string DoDivison(int _num1, int _num2)
	{
		std::string div = std::to_string(_num1 / _num2);


		return div;
	}
	wxString Execute()
	{
		std::string result = DoDivison(_num1, _num2);
		return result;
	}
};
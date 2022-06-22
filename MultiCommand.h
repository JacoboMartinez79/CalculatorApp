#pragma once
#include "ICommand.h"
#include <string>


class MultiCommand : public ICommand
{
public:
	MultiCommand() {};
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
	std::string DoMultiply(int _num1, int _num2)
	{
		std::string multi = std::to_string(_num1 * _num2);
		return multi;
	}
	wxString Execute()
	{
		std::string result = DoMultiply(_num1, _num2);
		return result;
	}

};
#pragma once
#include "ICommand.h"
#include <string>
class AddCommand : public ICommand
{
public:

	AddCommand() {};
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

	std::string DoAddition(int _num1, int _num2)
	{
		std::string add = std::to_string(_num1 + _num2);

		return add;
	}
	wxString Execute()
	{
		std::string answer = DoAddition(_num1, _num2);
		return answer;
	}
};

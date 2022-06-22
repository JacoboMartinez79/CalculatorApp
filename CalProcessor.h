#pragma once
#include<string>
class CalProcessor 
{
private:
	static CalProcessor* _processor;
	int baseNumber;
	CalProcessor(){}
public:
	//common pratice to have a Getinstance(); function.
	static CalProcessor* GetInstance() {
		if (_processor == nullptr) 
		{
			_processor = new CalProcessor();
		}
		return _processor;
	}

	// need to make one object only and it isnt cloned so these arent needed.
	CalProcessor(CalProcessor& other) = delete;
	void operator= (const CalProcessor& other) = delete;

	//Setter of the number
	void SetBaseNum(int num)
	{
		baseNumber = num;
	}
	//conversions
	std::string GetDecimal()
	{
		return std::to_string(baseNumber);
	}
	std::string GetBinary() {
		std::string result = "";
		int num = baseNumber;
		for (int i = 0; i < 32; i++)
		{
			if (num % 2 == 0) {
				result = "0" + result;
			}
			else {
				result = "1" + result;
			}
		num = num / 2;
		}
		return result;
	}
	std::string GetHexadecimal() {
		std::string NumsToAlpha = "";
		int holder = baseNumber;
		while (holder > 0)
		{
			int rem = holder % 16;
			if (rem < 10) {
				NumsToAlpha = std::to_string(rem) + NumsToAlpha;
			}
			else if (rem == 10)
			{
				NumsToAlpha = "A" + NumsToAlpha;
			}
			else if (rem == 11)
			{
				NumsToAlpha = "B" + NumsToAlpha;
			}
			else if (rem == 12)
			{
				NumsToAlpha = "C" + NumsToAlpha;
			}
			else if (rem == 13)
			{
				NumsToAlpha = "D" + NumsToAlpha;
			}
			else if (rem == 14)
			{
				NumsToAlpha = "E" + NumsToAlpha;
			}
			else if (rem == 15)
			{
				NumsToAlpha = "F" + NumsToAlpha;
			}
			holder = holder / 16;
		}
		NumsToAlpha = "0x" + NumsToAlpha;
		return NumsToAlpha;
	}
	/*std::string DoAddition(int _num1, int _num2)
	{
		std::string add = std::to_string(_num1 + _num2);
		return add;
	}
	std::string DoSubtraction(int _num1, int _num2)
	{
		std::string sub = std::to_string(_num1 - _num2);
		return sub;
	}
	std::string DoDivison(int _num1, int _num2)
	{
		std::string div = std::to_string(_num1 / _num2);
		return div;
	}
	std::string DoMultiply(int _num1, int _num2)
	{
		std::string multi = std::to_string(_num1 * _num2);
		return multi;
	}*/

};
CalProcessor* CalProcessor :: _processor = nullptr;
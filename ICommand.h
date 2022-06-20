#pragma once
#include <iostream>

class ICommand
{
public:
	virtual void Execute() = 0;
};

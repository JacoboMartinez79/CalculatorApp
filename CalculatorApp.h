#pragma once
#include <wx/wx.h>
#include "MainCalculator.h"

class CalculatorApp : public wxApp
{
   public:
	   CalculatorApp();
	   ~CalculatorApp();

   private:
	   MainCalculator* m_form1 = nullptr;

   public:
	   virtual bool OnInit();

};


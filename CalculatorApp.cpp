#include "CalculatorApp.h"

wxIMPLEMENT_APP(CalculatorApp);

//frame
CalculatorApp::CalculatorApp() 
{

}
CalculatorApp::~CalculatorApp() 
{

}
//this shows the window
bool CalculatorApp::OnInit()
{
	m_form1 = new MainCalculator();
	m_form1->Show();
	return true;
}
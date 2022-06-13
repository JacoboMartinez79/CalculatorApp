#include "CalFactory.h"

CalFactory::CalFactory(MainCalculator* m_form1) {
	m_form1= m_form1;
}
CalFactory::~CalFactory() {

	
}
wxButton* CalFactory::m_btn0() 
{
	m_btn = new wxButton(m_form1, 0, "0", wxPoint(0, 400), wxSize(300, 50));
	return m_btn;
}
wxButton* CalFactory::m_btn1() 
{
	m_btn = new wxButton(m_form1, 1, "1", wxPoint(0, 250), wxSize(100, 50));
	return m_btn;
}
wxButton* CalFactory::m_btn2() 
{
	m_btn = new wxButton(m_form1, 2, "2", wxPoint(0, 300), wxSize(100, 50));
	return m_btn;
}
wxButton* CalFactory::m_btn3() 
{
	m_btn = new wxButton(m_form1, 3, "3", wxPoint(0, 350), wxSize(100, 50));
	return m_btn;
}
wxButton* CalFactory::m_btn4() 
{
	m_btn = new wxButton(m_form1, 4, "4", wxPoint(100, 350), wxSize(100, 50));
	return m_btn;
}
wxButton* CalFactory::m_btn5() 
{			 
	m_btn = new wxButton(m_form1, 5, "5", wxPoint(100, 250), wxSize(100, 50));
	return m_btn;
}			 
wxButton* CalFactory::m_btn6() 
{			
	m_btn = new wxButton(m_form1, 6, "6", wxPoint(100, 300), wxSize(100, 50));
	return m_btn;
}			
wxButton* CalFactory::m_btn7() 
{			 
	m_btn = new wxButton(m_form1, 7, "7", wxPoint(200, 350), wxSize(100, 50));
	return m_btn;
}			 
wxButton* CalFactory::m_btn8()
{			
	m_btn = new wxButton(m_form1, 8, "8", wxPoint(200, 300), wxSize(100, 50));
	return m_btn;
}			
wxButton* CalFactory::m_btn9() 
{
	m_btn = new wxButton(m_form1, 9, "9", wxPoint(200, 250), wxSize(100, 50));
	return m_btn;
}
wxButton* CalFactory::m_btn10()
{
	m_btn = new wxButton(m_form1, 10, "/", wxPoint(300, 250), wxSize(100, 50));
	return m_btn;
}
wxButton* CalFactory::m_btn11()
{
	m_btn = new wxButton(m_form1, 11, "-", wxPoint(300, 300), wxSize(100, 50));
	return m_btn;
}
wxButton* CalFactory::m_btn12()
{
	m_btn = new wxButton(m_form1, 12, "Decimal", wxPoint(200, 200), wxSize(100, 50));
	return m_btn;
}
wxButton* CalFactory::m_btn13() 
{
	m_btn = new wxButton(m_form1, 13, "+", wxPoint(300, 350), wxSize(100, 50));
	return m_btn;
}
wxButton* CalFactory::m_btn14()
{
	m_btn = new wxButton(m_form1, 14, "=", wxPoint(300, 400), wxSize(100, 50));

	return m_btn;
}
wxButton* CalFactory::m_btn15()
{
	m_btn = new wxButton(m_form1, 15, "Clear", wxPoint(200, 150), wxSize(200, 50));

	return m_btn;
}
wxButton* CalFactory::m_btn16()
{
	m_btn = new wxButton(m_form1, 16, "Binary", wxPoint(100, 200), wxSize(100, 50));

	return m_btn;
}
wxButton* CalFactory::m_btn17()
{
	m_btn = new wxButton(m_form1, 17, "HexaDecimal", wxPoint(100, 150), wxSize(100, 50));

	return m_btn;
}
wxButton* CalFactory::m_btn18()
{
	m_btn = new wxButton(m_form1, 18, "+/-", wxPoint(0, 200), wxSize(100, 50));

	return m_btn;
}
wxButton* CalFactory::m_btn19()
{
	m_btn = new wxButton(m_form1, 19, "*", wxPoint(300, 200), wxSize(100, 50));

	return m_btn;
}
wxButton* CalFactory::m_btn20()
{
	m_btn = new wxButton(m_form1, 20, "Mod", wxPoint(0, 150), wxSize(100, 50));

	return m_btn;
}
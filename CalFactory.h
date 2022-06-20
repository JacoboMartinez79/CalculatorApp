#pragma once
#include "wx/wx.h"
#include "MainCalculator.h"
class CalFactory
{
public:
	MainCalculator* m_form1 = nullptr;
	wxButton* m_btn = nullptr;

	//wxButton* createbuttons(wxWindow* window, int ID, wxString letter, wxPoint point, wxSize size);
	CalFactory(MainCalculator* m_form1);
	~CalFactory();
	wxButton* m_btn0();
	wxButton* m_btn1();
	wxButton* m_btn2();
	wxButton* m_btn3();
	wxButton* m_btn4();
	wxButton* m_btn5();
	wxButton* m_btn6();
	wxButton* m_btn7();
	wxButton* m_btn8();
	wxButton* m_btn9();
	wxButton* m_btn10();
	wxButton* m_btn11();
	wxButton* m_btn12();
	wxButton* m_btn13();
	wxButton* m_btn14();
	wxButton* m_btn15();
	wxButton* m_btn16();
	wxButton* m_btn17();
	wxButton* m_btn18();
	wxButton* m_btn19();
	wxButton* m_btn20();
};


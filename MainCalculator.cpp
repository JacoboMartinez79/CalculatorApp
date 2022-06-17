#include "MainCalculator.h"
#include "CalFactory.h"
#include "CalculatorApp.h"

wxBEGIN_EVENT_TABLE(MainCalculator, wxFrame)
EVT_BUTTON(0, OnButtonClicked)
wxEND_EVENT_TABLE()


MainCalculator::MainCalculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400, 400), wxSize(417,490))
{
	CalFactory maker = CalFactory(this);

	/*CalFactory factory = CalFactory(this);
	m_btn = factory.createbuttons(this, wxID_ANY, "Calculator", wxPoint(400, 400), wxSize(417, 490));*/
	
	//buttons 0 through 20
	maker.m_btn0();
	maker.m_btn1();
	maker.m_btn2();
	maker.m_btn3();
	maker.m_btn4();
	maker.m_btn5();
	maker.m_btn6();
	maker.m_btn7();
	maker.m_btn8();
	maker.m_btn9();
	maker.m_btn10();
	maker.m_btn11();
	maker.m_btn12();
	maker.m_btn13();
	maker.m_btn14();
	maker.m_btn15();
	maker.m_btn16();
	maker.m_btn17();
	maker.m_btn18();
	maker.m_btn19();
	maker.m_btn20();
	m_txt = new wxTextCtrl(this, 21," ", wxPoint(0, 0), wxSize(400, 150));

	Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainCalculator::OnButtonClicked, this);
}

MainCalculator::~MainCalculator()
{
	//delete m_btn;
}
void MainCalculator::OnButtonClicked(wxCommandEvent& evt)
{
 int num = evt.GetId();
 wxString stringNum = "";
 stringNum << num;
 
 if(0 <= num && num <= 9)
 {
   m_txt->AppendText(stringNum);
 }
 if (num == 10)
 {
	 m_txt->AppendText("/");
 }
 if (num == 11)
 {
	 m_txt->AppendText("-");
 } 
 if (num == 12)
 {
    m_txt->AppendText("Decimal");
 }
 if (num == 13)
 {
	 m_txt->AppendText("+");
 }
 if (num == 14)
 {
	 m_txt->AppendText("=");
 }
 if (num == 15)
 {
	 m_txt->Clear();
 }
 if (num == 16)
 {
	 m_txt->AppendText("Binary");
 }
 if (num == 17)
 {
	 m_txt->AppendText("HexaDecimal");
 }
 if (num == 18)
 {
	 m_txt->AppendText("+/-");
 }
 if (num == 19)
 {
	 m_txt->AppendText("*");
 }
 if (num == 20)
 {
	 m_txt->AppendText("Mod");
 }
 
}

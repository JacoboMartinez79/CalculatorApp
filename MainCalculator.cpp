#include "MainCalculator.h"
wxBEGIN_EVENT_TABLE(MainCalculator, wxFrame)
EVT_BUTTON(0, OnButtonClicked)
wxEND_EVENT_TABLE()


MainCalculator::MainCalculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400, 400), wxSize(417,490))
{
	m_btn = new wxButton(this, 0, "0", wxPoint(0, 400), wxSize(300, 50));
	m_btn= new wxButton(this, 1, "1", wxPoint(0, 250), wxSize(100, 50));
	m_btn= new wxButton(this, 2, "2", wxPoint(0, 300), wxSize(100, 50));
	m_btn= new wxButton(this, 3, "3", wxPoint(0, 350), wxSize(100, 50));
	m_btn= new wxButton(this, 4, "4", wxPoint(100, 350), wxSize(100, 50));
	m_btn= new wxButton(this, 5, "5", wxPoint(100, 250), wxSize(100, 50));
	m_btn= new wxButton(this, 6, "6", wxPoint(100, 300), wxSize(100, 50));
	m_btn= new wxButton(this, 7, "7", wxPoint(200, 350), wxSize(100, 50));
	m_btn= new wxButton(this, 8, "8", wxPoint(200, 300), wxSize(100, 50));
	m_btn= new wxButton(this, 9, "9", wxPoint(200, 250), wxSize(100, 50));
	m_btn= new wxButton(this, 10, "/", wxPoint(300, 250), wxSize(100, 50));
	m_btn= new wxButton(this, 11, "-", wxPoint(300, 300), wxSize(100, 50));
	m_btn = new wxButton(this, 12, "Decimal", wxPoint(200, 200), wxSize(100, 50));
	m_btn = new wxButton(this, 13, "+", wxPoint(300, 350), wxSize(100, 50));
	m_btn = new wxButton(this, 14, "=", wxPoint(300, 400), wxSize(100, 50));
	m_btn = new wxButton(this, 15, "Clear", wxPoint(200, 150), wxSize(200,50));
	m_btn = new wxButton(this, 16, "Binary", wxPoint(100, 200), wxSize(100, 50));
	m_btn = new wxButton(this, 17, "HexaDecimal", wxPoint(100, 150), wxSize(100, 50));
	m_btn= new wxButton(this, 18, "+/-", wxPoint(0, 200), wxSize(100, 50));
	m_btn = new wxButton(this, 19, "*", wxPoint(300, 200), wxSize(100, 50));
	m_btn = new wxButton(this, 20, "Mod", wxPoint(0, 150), wxSize(100, 50));
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

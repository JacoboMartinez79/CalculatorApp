#include "MainCalculator.h"



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
	m_btn= new wxButton(this, 10, "%", wxPoint(300, 250), wxSize(100, 50));
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
	//m_list = new wxListBox(this, 20, wxPoint(200, 200), wxSize(100, 100));
	m_txt = new wxTextCtrl(this, 21," ", wxPoint(0, 0), wxSize(400, 150));

	//Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainCalculator::OnButtonClicked, this);
}

MainCalculator::~MainCalculator()
{
	//delete m_btn;
}
/*void MainCalculator::OnButtonClicked(wxCommandEvent& evt)
{

}*/
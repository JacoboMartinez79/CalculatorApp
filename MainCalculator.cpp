#include "MainCalculator.h"
#include "CalFactory.h"
#include "CalculatorApp.h"
#include "CalProcessor.h"

wxBEGIN_EVENT_TABLE(MainCalculator, wxFrame)
EVT_BUTTON(0, OnButtonClicked)
wxEND_EVENT_TABLE()


MainCalculator::MainCalculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400, 400), wxSize(417, 490))
{
	CalFactory maker = CalFactory(this);

	/*CalFactory factory = CalFactory(this);
	m_btn = factory.createbuttons(this, wxID_ANY, "Calculator", wxPoint(400, 400), wxSize(417, 490));*/

	m_txt = new wxTextCtrl(this, 21, " ", wxPoint(0, 0), wxSize(400, 150));
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

	Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainCalculator::OnButtonClicked, this);
}

MainCalculator::~MainCalculator()
{
	//delete m_btn;
}
int num1, num2;
wxString _num1 = "";
wxString _num2 = "";
bool symbol = false;
wxString sym = "";
void MainCalculator::OnButtonClicked(wxCommandEvent& evt)
{
	CalProcessor* proc = CalProcessor::GetInstance();
	wxString stringNum = "";
	if (evt.GetId() >= 0 && evt.GetId() < 10)
	{
		stringNum << evt.GetId();
		m_txt->AppendText(stringNum);
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else
			{
				_num2 += std::to_string(evt.GetId());
			}
		}
	}

if (evt.GetId() == 10)
{
	_num1 = m_txt->GetValue();
	m_txt->AppendText("/");
	sym = "/";
	symbol = true;
}
if (evt.GetId() == 11)
{
	_num1 = m_txt->GetValue();
	m_txt->AppendText("-");
	sym = "-";
	symbol = true;
}
if (evt.GetId() == 12)
{
	proc->SetBaseNum(wxAtoi(m_txt->GetValue()));
	m_txt->Clear();
	m_txt->AppendText(proc->GetDecimal());
}
if (evt.GetId() == 13)
{
	_num1 = m_txt->GetValue();
	m_txt->AppendText("+");
	sym = "+";
	symbol = true;
}
/*if (evt.GetId() == 14)
{
	_num1 = m_txt->GetValue();
	m_txt->AppendText("=");
	sym = "=";
	symbol = true;
}*/
if (evt.GetId() == 14)
{
	symbol = false;
	if (sym == "+")
	{
		num1 = wxAtoi(_num1);
		num2 = wxAtoi(_num2);
		m_txt->Clear();
		m_txt->AppendText(proc->DoAddition(num1, num2));
	}
	else if (sym == "-")
	{
		num1 = wxAtoi(_num1);
		num2 = wxAtoi(_num2);
		m_txt->Clear();
		m_txt->AppendText(proc->DoSubtraction(num1, num2));
	}
	else if (sym == "/")
	{
		num1 = wxAtoi(_num1);
		num2 = wxAtoi(_num2);
		m_txt->Clear();
		m_txt->AppendText(proc->DoDivison(num1, num2));
	}
	else if (sym == "*")
	{
		num1 = wxAtoi(_num1);
		num2 = wxAtoi(_num2);
		m_txt->Clear();
		m_txt->AppendText(proc->DoMultiply(num1, num2));
	}
	_num2.Clear();
	_num1.Clear();
	num1 = 0;
	num2 = 0;
}
if (evt.GetId() == 15)
{
	m_txt->Clear();
}
if (evt.GetId() == 16)
{
	proc->SetBaseNum(wxAtoi(m_txt->GetValue()));
	m_txt->Clear();
	m_txt->AppendText(proc->GetBinary());
}
if (evt.GetId() == 17)
{
	proc->SetBaseNum(wxAtoi(m_txt->GetValue()));
	m_txt->Clear();
	m_txt->AppendText(proc->GetHexadecimal());
}
if (evt.GetId() == 18)
{
	_num1 = m_txt->GetValue();
	m_txt->AppendText("+/-");
	sym = "=";
	symbol = true;
}
if (evt.GetId() == 19)
{
	//proc->SetBaseNum(wxAtoi(m_txt->GetValue()));
	_num1 = m_txt->GetValue();
	m_txt->AppendText("*");
	sym = "*";
	symbol = true;
}
if (evt.GetId() == 20)
{
	m_txt->AppendText("Mod");
}

}

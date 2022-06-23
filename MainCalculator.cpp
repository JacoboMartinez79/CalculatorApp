#include "MainCalculator.h"
#include "CalFactory.h"
#include "CalculatorApp.h"
#include "CalProcessor.h"
#include "AddCommand.h"
#include "DivideCommand.h"
#include "MultiCommand.h"
#include "SubtractCommand.h"
#include <vector>

wxBEGIN_EVENT_TABLE(MainCalculator, wxFrame)
EVT_BUTTON(0, OnButtonClicked)
wxEND_EVENT_TABLE()


MainCalculator::MainCalculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400, 400), wxSize(417, 490))
{
	CalFactory maker = CalFactory(this);
	m_txt = new wxTextCtrl(this, 21, " ", wxPoint(0, 0), wxSize(400, 150));
	//buttons 0 through 20
	maker.Createbuttons(this, 0, "0", wxPoint(0, 400), wxSize(300, 50));
	maker.Createbuttons(this, 1, "1", wxPoint(0, 250), wxSize(100, 50));
	maker.Createbuttons(this, 2, "2", wxPoint(0, 300), wxSize(100, 50));
	maker.Createbuttons(this, 3, "3", wxPoint(0, 350), wxSize(100, 50));
	maker.Createbuttons(this, 4, "4", wxPoint(100, 350), wxSize(100, 50));
	maker.Createbuttons(this, 5, "5", wxPoint(100, 250), wxSize(100, 50));
	maker.Createbuttons(this, 6, "6", wxPoint(100, 300), wxSize(100, 50));
	maker.Createbuttons(this, 7, "7", wxPoint(200, 350), wxSize(100, 50));
	maker.Createbuttons(this, 8, "8", wxPoint(200, 300), wxSize(100, 50));
	maker.Createbuttons(this, 9, "9", wxPoint(200, 250), wxSize(100, 50));
	maker.Createbuttons(this, 10, "/", wxPoint(300, 250), wxSize(100, 50));
	maker.Createbuttons(this, 11, "-", wxPoint(300, 300), wxSize(100, 50));
	maker.Createbuttons(this, 12, "Decimal", wxPoint(200, 200), wxSize(100, 50));
	maker.Createbuttons(this, 13, "+", wxPoint(300, 350), wxSize(100, 50));
	maker.Createbuttons(this, 14, "=", wxPoint(300, 400), wxSize(100, 50));
	maker.Createbuttons(this, 15, "Clear", wxPoint(200, 150), wxSize(200, 50));
	maker.Createbuttons(this, 16, "BInary", wxPoint(100, 200), wxSize(100, 50));
	maker.Createbuttons(this, 17, "HexaDecimal", wxPoint(100, 150), wxSize(100, 50));
	maker.Createbuttons(this, 18, "+/-", wxPoint(0, 200), wxSize(100, 50));
	maker.Createbuttons(this, 19, "*", wxPoint(300, 200), wxSize(100, 50));
	maker.Createbuttons(this, 20, "Mod", wxPoint(0, 150), wxSize(100, 50));

	/*maker.m_btn0();
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
	maker.m_btn20();*/
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
wxString holder = "";
bool setnum = false;
bool posneg = false;
bool setholder = false;
wxString sym = "";
bool convert = true;
void MainCalculator::OnButtonClicked(wxCommandEvent& evt)
{
	std::vector<ICommand*> Commander;

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

		if (convert == true) {
			proc->SetBaseNum(wxAtoi(m_txt->GetValue()));
		}
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
	if (evt.GetId() == 14)
	{
		symbol = false;
		if (sym == "+")
		{
			AddCommand* Add = new AddCommand();

			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Add->setNum1(num1);
			Add->setNum2(num2);

			Commander.push_back(Add);
			m_txt->Clear();

			m_txt->AppendText(Commander[0]->Execute());

			delete Add;
		}
		else if (sym == "-")
		{

			SubtractCommand* sub = new SubtractCommand();

			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Commander.push_back(sub);

			m_txt->Clear();

			m_txt->AppendText(Commander[0]->Execute());

			delete sub;
		}
		else if (sym == "/")
		{
			DivideCommand* Divide = new DivideCommand();

			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			Commander.push_back(Divide);

			m_txt->Clear();

			m_txt->AppendText(Commander[0]->Execute());

			delete Divide;
		}
		else if (sym == "*")
		{
			MultiCommand* Multi = new MultiCommand();

			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Commander.push_back(Multi);

			m_txt->Clear();

			m_txt->AppendText(Commander[0]->Execute());

			delete Multi;
		}
		_num2.Clear();
		_num1.Clear();
		num1 = 0;
		num2 = 0;
	}
	if (evt.GetId() == 15)
	{
		m_txt->Clear();
		convert = false;
	}
	if (evt.GetId() == 16)
		if (convert == true) {
			proc->SetBaseNum(wxAtoi(m_txt->GetValue()));
		}
	{
		proc->SetBaseNum(wxAtoi(m_txt->GetValue()));
		m_txt->Clear();
		m_txt->AppendText(proc->GetBinary());
	}
	if (evt.GetId() == 17)
	{
		proc->SetBaseNum(wxAtoi(m_txt->GetValue()));
		if (convert == true) {
			proc->SetBaseNum(wxAtoi(m_txt->GetValue()));
		}
		m_txt->Clear();
		m_txt->AppendText(proc->GetHexadecimal());
	}
	if (evt.GetId() == 18)
	{
		if (symbol == false)
		{
			if (setholder == false)
			{
				holder = _num1;
				setholder = true;
			}
			if (posneg == true)
			{
				posneg = false;
				_num1.Clear();
				_num1 = holder;
				m_txt->Clear();
				m_txt->AppendText(_num1);
			}
			else
			{
				posneg = true;
				_num1.Clear();
				_num1 = "-";
				_num1 += holder;
				m_txt->Clear();
				m_txt->AppendText(_num1);
			}
		}
		else
		{
			if (setholder == false)
			{
				holder = _num2;
				setholder = true;
			}
			if (posneg == true)
			{
				posneg = false;
				_num2.Clear();
				_num2 += holder;
				m_txt->Clear();
				m_txt->AppendText(_num1);
				m_txt->AppendText(sym);
				m_txt->AppendText(_num2);
			}
			else
			{
				posneg = true;
				_num2.Clear();
				_num2 = "-";
				_num2 += holder;
				m_txt->Clear();
				m_txt->AppendText(_num1);
				m_txt->AppendText(sym);
				m_txt->AppendText(_num2);

			}
		}
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

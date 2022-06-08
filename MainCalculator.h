#pragma once
#include <wx/wx.h>

class MainCalculator : public wxFrame
{
public:
	MainCalculator();
	~MainCalculator();
public:
	//int nFieldWidth = 10;
	//int nFieldHeight = 10;
	wxButton *m_btn = nullptr;
	wxTextCtrl *m_txt = nullptr;
	wxListBox* m_list = nullptr;

	//int* nField = nullptr;
	//bool mFirstClick = true;
	

};


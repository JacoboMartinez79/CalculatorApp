#pragma once
#include <wx/wx.h>

class MainCalculator : public wxFrame
{
public:
	MainCalculator();
	~MainCalculator();
public:
	
	wxButton *m_btn = nullptr;
	wxTextCtrl *m_txt = nullptr;

	void OnButtonClicked(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();
};


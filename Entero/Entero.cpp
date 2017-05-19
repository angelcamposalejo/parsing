#include "stdafx.h"  //________________________________________ Entero.cpp
#include "Entero.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Entero app;
	return app.BeginDialog(IDI_Entero, hInstance);
}

void Entero::Window_Open(Win::Event& e)
{
	double distancia = Sys::Convert::ToDouble(L"18.126 Km");
	wstring texto;
	Sys::Format(texto, L"%g", distancia);
	this->MessageBox(texto,texto,MB_OK|MB_ICONINFORMATION);
}


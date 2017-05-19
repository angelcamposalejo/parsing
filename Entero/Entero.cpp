#include "stdafx.h"  //________________________________________ Entero.cpp
#include "Entero.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Entero app;
	return app.BeginDialog(IDI_Entero, hInstance);
}

void Entero::Window_Open(Win::Event& e)
{
	int ancho = Sys::Convert::ToInt(L"10 metros");
	ancho--;
	wstring texto;
	Sys::Format(texto, L"El ancho es %d", ancho);
	this->MessageBox(L"*****Ancho*****",texto,MB_OK|MB_ICONINFORMATION);
}


#include "stdafx.h"  //________________________________________ Entero.cpp
#include "Entero.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Entero app;
	return app.BeginDialog(IDI_Entero, hInstance);
}

void Entero::Window_Open(Win::Event& e)
{
	int age = 22;
	this->MessageBox(Sys::Convert::ToString(age), L"Edad", MB_OK);
}


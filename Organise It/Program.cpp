#include "OkienkoMain.h"
#include "NowyEventForm.h"
#include <iostream>
//using namespace System;
//using namespace System::Windows::Forms;

using namespace OrganiseIt;

[STAThreadAttribute]


int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	//utworzenie obiektu Okna głownego
	OkienkoMain^ okienkomain = gcnew OkienkoMain;
	//wyświetlenie okna
	okienkomain->Show();
	
	
	Application::Run();
	return 0;
}

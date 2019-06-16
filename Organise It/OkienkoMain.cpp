#include "OkienkoMain.h"
#include "NowyEventForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OrganiseIt::OkienkoMain forma;
	Application::Run(%forma);
	return 0;
}
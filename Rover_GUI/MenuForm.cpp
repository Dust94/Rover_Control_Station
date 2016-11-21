#include "MenuForm.h"

using namespace System;
using namespace System::Windows::Forms;

void Main(array<String^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Rover_GUI::MenuForm menuform;
	Application::Run(%menuform);
}



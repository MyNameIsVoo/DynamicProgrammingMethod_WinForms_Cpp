#include "pch.h"
#include "DynamicProgrammingMethod.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyWorksCppWinForms::DynamicProgrammingMethod form;
	Application::Run(% form);
}
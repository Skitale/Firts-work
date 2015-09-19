#include "train.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(/*array<String^>^args*/) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	

	train_two::train form;
	Application::Run(%form);
}

#include "LandingPage.h"
#include "Admin.h"


using namespace LibrarySystem;

[STAThreadAttribute]
int main() {

	Application::Run(gcnew Admin());

	return 0;
}

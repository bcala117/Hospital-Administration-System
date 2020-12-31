#include "FormMain.h"
#include "SplashScreen.h"
#include "DatabaseManager.h"

namespace HospitalAdministrationSystem 
{
	using namespace System;
	using namespace System::Windows::Forms;

	[STAThread]
	int Main(array<System::String ^> ^args)
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		/*SplashScreen ^ss = gcnew SplashScreen;
		ss->ShowDialog();*/
		//DatabaseManager ^manager = gcnew DatabaseManager("Data Source=test.db");

		//std::vector<MedicalEmployee> doctors = manager->getDoctors();
		//std::vector<MedicalEmployee> nurses = manager->getNurses();
		//std::vector<Patient> patients = manager->getPatients();
		//std::vector<Room> rooms = manager->getRooms();

		//manager->isOpen();


		Application::Run(gcnew FormMain());
		return 0;
	}
}
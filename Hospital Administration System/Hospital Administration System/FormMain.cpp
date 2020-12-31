#include "FormMain.h"
#include "Globals.h"

namespace HospitalAdministrationSystem
{
	FormMain::FormMain(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}
	FormMain::~FormMain()
	{
		if (components)
		{
			delete components;
		}
	}

	System::Void FormMain::FormMain_Load(System::Object^  sender, System::EventArgs^  e)
	{
		std::vector<MedicalEmployee> nurses = Globals::databaseManager->getNurses();
		std::vector<Patient> patients = Globals::databaseManager->getPatients();
		std::vector<Room> rooms = Globals::databaseManager->getRooms();

		for (Patient patient : Globals::databaseManager->getPatients())
		{
			ListViewItem ^item = gcnew ListViewItem(gcnew String(patient.getName().c_str()));
			item->SubItems->Add(gcnew String(patient.getPatientID().c_str()));
			item->SubItems->Add(gcnew String(patient.getRoomNumber().c_str()));
			item->SubItems->Add(gcnew String(Globals::databaseManager->getDoctor(gcnew String(patient.getDoctor().c_str())).getName().c_str()));
			item->SubItems->Add(gcnew String(Globals::databaseManager->getNurse(gcnew String(patient.getNurse().c_str())).getName().c_str()));
			item->SubItems->Add(gcnew String(patient.getAilment().c_str()));
			item->SubItems->Add(gcnew String(patient.getInsurance().c_str()));
			item->SubItems->Add(gcnew String(patient.getBillingInfo().ToString()));
			listView_Patients->Items->Add(item);
		}

		for (MedicalEmployee doctor : Globals::databaseManager->getDoctors())
		{
			ListViewItem ^item = gcnew ListViewItem(gcnew String(doctor.getName().c_str()));
			item->SubItems->Add(gcnew String(doctor.getEmployeeID().c_str()));
			item->SubItems->Add(gcnew String(doctor.getClockedIn().ToString()));
			item->SubItems->Add(gcnew String(doctor.getHoursWrokedPerWeek().ToString()));
			item->SubItems->Add(gcnew String(doctor.getSpecialization().c_str()));
			item->SubItems->Add(gcnew String(doctor.getPatients().size().ToString()));
			listView_Doctors->Items->Add(item);
		}

		for (MedicalEmployee nurse : Globals::databaseManager->getNurses())
		{
			ListViewItem ^item = gcnew ListViewItem(gcnew String(nurse.getName().c_str()));
			item->SubItems->Add(gcnew String(nurse.getEmployeeID().c_str()));
			item->SubItems->Add(gcnew String(nurse.getClockedIn().ToString()));
			item->SubItems->Add(gcnew String(nurse.getHoursWrokedPerWeek().ToString()));
			item->SubItems->Add(gcnew String(nurse.getSpecialization().c_str()));
			item->SubItems->Add(gcnew String(nurse.getPatients().size().ToString()));
			listView_Nurses->Items->Add(item);
		}

		for (Employee employee : Globals::databaseManager->getOtherEmployees())
		{
			ListViewItem ^item = gcnew ListViewItem(gcnew String(employee.getName().c_str()));
			item->SubItems->Add(gcnew String(employee.getEmployeeID().c_str()));
			item->SubItems->Add(gcnew String(employee.getClockedIn().ToString()));
			item->SubItems->Add(gcnew String(employee.getHoursWrokedPerWeek().ToString()));
			item->SubItems->Add(gcnew String(employee.getExperience().ToString()));
			listView_Other->Items->Add(item);
		}

		for (Item inventoryItem : Globals::databaseManager->getItems())
		{
			ListViewItem ^item = gcnew ListViewItem(gcnew String(inventoryItem.getItemName().c_str()));
			item->SubItems->Add(gcnew String(inventoryItem.getQuantity().ToString()));
			item->SubItems->Add(gcnew String(inventoryItem.getItemPrice().ToString()));
			item->SubItems->Add(gcnew String(inventoryItem.getDescription().c_str()));
			listView_Inventory->Items->Add(item);
		}

		for (Room room : Globals::databaseManager->getRooms())
		{
			ListViewItem ^item = gcnew ListViewItem(gcnew String(room.getRoomNumber().c_str()));
			item->SubItems->Add(gcnew String(room.getMaxSize().ToString()));
			item->SubItems->Add(gcnew String(room.getNumPatients().ToString()));
			listView_Rooms->Items->Add(item);
		}
	}
}
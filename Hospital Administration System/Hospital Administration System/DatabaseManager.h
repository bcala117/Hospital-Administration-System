#pragma once

#include "Patient.h"
#include "MedicalEmployee.h"
#include "Room.h"
#include "Item.h"
#include <vector>

namespace HospitalAdministrationSystem
{
	using namespace System;
	using namespace System::Data;
	using namespace System::Data::SQLite;

	public ref class DatabaseManager
	{
	public:
		DatabaseManager();
		DatabaseManager(String ^file);

		bool open(String ^file);
		bool isOpen();

		std::vector<Patient> getPatients();
		std::vector<MedicalEmployee> getDoctors();
		std::vector<MedicalEmployee> getNurses();
		std::vector<Employee> getOtherEmployees();
		std::vector<Room> getRooms();
		std::vector<Item> DatabaseManager::getItems();

		Patient getPatient(String ^patientID);
		MedicalEmployee getDoctor(String ^employeeID);
		MedicalEmployee getNurse(String ^employeeID);
		Room getRoom(String ^roomNumber);


	private:
		SQLiteConnection ^sqlLiteDB;
		bool dbOpen;

		bool tableExists(String ^table);
		void createTables();
		std::vector<MedicalEmployee> getMedicalEmployees(String^ employeeType);
		MedicalEmployee getMedicalEmployee(String^ employeeType, String^ employeeID);
	};
}
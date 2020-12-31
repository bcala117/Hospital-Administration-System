#include "DatabaseManager.h"
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

namespace HospitalAdministrationSystem
{
	DatabaseManager::DatabaseManager()
	{
		this->dbOpen = false;

	}
	DatabaseManager::DatabaseManager(String ^ file)
	{
		this->open(file);
	}
	bool DatabaseManager::open(String ^ file)
	{
		if (!this->dbOpen)
		{
			// Initialize database.
			this->sqlLiteDB = gcnew SQLiteConnection(gcnew SQLiteConnection(file));
			// open database.
			this->sqlLiteDB->Open();
			// check if database opened.
			this->dbOpen = (this->sqlLiteDB->State == ConnectionState::Open);
			if (this->dbOpen && !this->tableExists("Patients"))
				this->createTables(); // create tables if table dont exist(all tables should exists).
		}
		return this->dbOpen; // return state.
	}
	bool DatabaseManager::isOpen()
	{
		return this->dbOpen;
	}
	std::vector<Patient> DatabaseManager::getPatients()
	{
		std::vector<Patient> patients;
		SQLiteCommand ^command = gcnew SQLiteCommand("SELECT * FROM Patients;", this->sqlLiteDB);
		SQLiteDataReader ^reader = command->ExecuteReader();
		while (reader->Read())
		{
			Patient patient(msclr::interop::marshal_as<std::string>((String^)reader["name"]),
				msclr::interop::marshal_as<std::string>((String^)reader["dateOfBirth"]),
				msclr::interop::marshal_as<std::string>((String^)reader["emergencyContact"]),
				ContactInformation(msclr::interop::marshal_as<std::string>((String^)reader["address"]),
					msclr::interop::marshal_as<std::string>((String^)reader["homePhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["cellPhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["workPhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["fax"]),
					msclr::interop::marshal_as<std::string>((String^)reader["email"])
				),
				msclr::interop::marshal_as<std::string>((String^)reader["patientID"]),
				msclr::interop::marshal_as<std::string>((String^)reader["roomNumber"]),
				msclr::interop::marshal_as<std::string>((String^)reader["doctor"]),
				msclr::interop::marshal_as<std::string>((String^)reader["nurse"]),
				(double)reader["bill"],
				msclr::interop::marshal_as<std::string>((String^)reader["ailment"]),
				msclr::interop::marshal_as<std::string>((String^)reader["insurance"]));

			patients.push_back(patient);
		}

		return patients;
	}
	std::vector<MedicalEmployee> DatabaseManager::getDoctors()
	{
		return getMedicalEmployees("Doctors");
	}
	std::vector<MedicalEmployee> DatabaseManager::getNurses()
	{
		return getMedicalEmployees("Nurses");
	}
	std::vector<Employee> DatabaseManager::getOtherEmployees()
	{
		std::vector<Employee> employees;
		SQLiteCommand ^command = gcnew SQLiteCommand("SELECT * FROM OtherEmployees;", this->sqlLiteDB);
		SQLiteDataReader ^reader = command->ExecuteReader();
		while (reader->Read())
		{
			Employee employee(msclr::interop::marshal_as<std::string>((String^)reader["name"]),
				msclr::interop::marshal_as<std::string>((String^)reader["dateOfBirth"]),
				msclr::interop::marshal_as<std::string>((String^)reader["emergencyContact"]),
				ContactInformation(msclr::interop::marshal_as<std::string>((String^)reader["address"]),
					msclr::interop::marshal_as<std::string>((String^)reader["homePhone"]),
					/*msclr::interop::marshal_as<std::string>((String^)reader["cellPhone"])*/"",
					msclr::interop::marshal_as<std::string>((String^)reader["workPhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["fax"]),
					msclr::interop::marshal_as<std::string>((String^)reader["email"])
				),
				msclr::interop::marshal_as<std::string>((String^)reader["employeeID"]),
				(int)reader["clockedIn"],
				msclr::interop::marshal_as<std::string>((String^)reader["salary"]),
				(int)reader["hoursWorkedPerWeek"],
				(int)reader["experience"]);

			employees.push_back(employee);
		}
		return employees;
	}
	std::vector<MedicalEmployee> DatabaseManager::getMedicalEmployees(String^ employeeType)
	{
		std::vector<MedicalEmployee> employees;
		SQLiteCommand ^command = gcnew SQLiteCommand(String::Format("SELECT * FROM {0};", employeeType), this->sqlLiteDB);
		SQLiteDataReader ^reader = command->ExecuteReader();
		while (reader->Read())
		{
			MedicalEmployee employee(msclr::interop::marshal_as<std::string>((String^)reader["name"]),
				msclr::interop::marshal_as<std::string>((String^)reader["dateOfBirth"]),
				msclr::interop::marshal_as<std::string>((String^)reader["emergencyContact"]),
				ContactInformation(msclr::interop::marshal_as<std::string>((String^)reader["address"]),
					msclr::interop::marshal_as<std::string>((String^)reader["homePhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["cellPhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["workPhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["fax"]),
					msclr::interop::marshal_as<std::string>((String^)reader["email"])
				),
				msclr::interop::marshal_as<std::string>((String^)reader["employeeID"]),
				(int)reader["clockedIn"],
				msclr::interop::marshal_as<std::string>((String^)reader["salary"]),
				(int)reader["hoursWorkedPerWeek"],
				(int)reader["experience"],
				msclr::interop::marshal_as<std::string>((String^)reader["degree"]),
				msclr::interop::marshal_as<std::string>((String^)reader["specialization"]));

			array<String^> ^patients = ((String^)reader["patients"])->Split('\n');
			for (int i = 0; i < patients->Length; i++)
			{
				employee.addPatient(getPatient(patients[i]));
			}

			employees.push_back(employee);
		}
		return employees;
	}
	std::vector<Room> DatabaseManager::getRooms()
	{
		std::vector<Room> rooms;
		SQLiteCommand ^command = gcnew SQLiteCommand("SELECT * FROM Rooms;", this->sqlLiteDB);
		SQLiteDataReader ^reader = command->ExecuteReader();
		while (reader->Read())
		{
			Room room(msclr::interop::marshal_as<std::string>((String^)reader["roomNumber"]),
				(int)reader["maxSize"]);
			
			array<String^> ^patients = ((String^)reader["patients"])->Split('\n');
			for (int i = 0; i < patients->Length; i++)
			{
				room.addPatient(getPatient(patients[i]));
			}

			rooms.push_back(room);
		}
		return rooms;
	}
	std::vector<Item> DatabaseManager::getItems()
	{
		std::vector<Item> items;
		SQLiteCommand ^command = gcnew SQLiteCommand("SELECT * FROM Inventory;", this->sqlLiteDB);
		SQLiteDataReader ^reader = command->ExecuteReader();
		while (reader->Read())
		{
			Item item(msclr::interop::marshal_as<std::string>((String^)reader["itemName"]),
				(double)reader["itemPrice"],
				(int)reader["itemQuantity"],
				msclr::interop::marshal_as<std::string>((String^)reader["itemDescription"]));

			items.push_back(item);
		}

		return items;
	}

	Patient DatabaseManager::getPatient(String ^ patientID)
	{
		Patient patient;
		SQLiteCommand ^command = gcnew SQLiteCommand(String::Format("SELECT * FROM Patients WHERE patientID='{0}';",patientID), this->sqlLiteDB);
		SQLiteDataReader ^reader = command->ExecuteReader();
		if (reader->Read())
		{
			patient = Patient(msclr::interop::marshal_as<std::string>((String^)reader["name"]),
				msclr::interop::marshal_as<std::string>((String^)reader["dateOfBirth"]),
				msclr::interop::marshal_as<std::string>((String^)reader["emergencyContact"]),
				ContactInformation(msclr::interop::marshal_as<std::string>((String^)reader["address"]),
					msclr::interop::marshal_as<std::string>((String^)reader["homePhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["cellPhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["workPhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["fax"]),
					msclr::interop::marshal_as<std::string>((String^)reader["email"])
				),
				msclr::interop::marshal_as<std::string>((String^)reader["patientID"]),
				msclr::interop::marshal_as<std::string>((String^)reader["roomNumber"]),
				msclr::interop::marshal_as<std::string>((String^)reader["doctor"]),
				msclr::interop::marshal_as<std::string>((String^)reader["nurse"]),
				(double)reader["bill"],
				msclr::interop::marshal_as<std::string>((String^)reader["ailment"]),
				msclr::interop::marshal_as<std::string>((String^)reader["insurance"]));
		}
		return patient;
	}
	MedicalEmployee DatabaseManager::getDoctor(String ^ employeeID)
	{
		return getMedicalEmployee("Doctors", employeeID);
	}
	MedicalEmployee DatabaseManager::getNurse(String ^ employeeID)
	{
		return getMedicalEmployee("Nurses", employeeID);
	}
	Room DatabaseManager::getRoom(String ^ roomNumber)
	{
		Room room;
		SQLiteCommand ^command = gcnew SQLiteCommand(String::Format("SELECT * FROM Rooms WHERE roomNumber='{0}';", roomNumber), this->sqlLiteDB);
		SQLiteDataReader ^reader = command->ExecuteReader();
		if (reader->Read())
		{
			room = Room(msclr::interop::marshal_as<std::string>((String^)reader["roomNumber"]),
				(int)reader["maxSize"]);

			array<String^> ^patients = ((String^)reader["patients"])->Split('\n');
			for (int i = 0; i < patients->Length; i++)
				room.addPatient(getPatient(patients[i]));
		}
		return room;
	}
	void DatabaseManager::createTables()
	{
		/*
		patientID VARCHAR(8), name VARCHAR(32), dateOfBirth VARCHAR(10), address VARCHAR(80), homePhone VARCHAR(10), workPhone VARCHAR(10), fax VARCHAR(10), email VARCHAR(320), emergencyContact VARCHAR(32)
		roomNumber VARCHAR(4), doctor VARCHAR(8), nurse VARCHAR(8), bill DOUBLE, ailment VARCHAR(100), insurance VARCHAR(32)

		employeeID VARCHAR(8), clockedIn INT, salary VARCHAR(10), hoursWorkedPerWeek INT, experience INT
		degree VARCHAR(20), specialization VARCHAR(20), patient VARCHAR(8)

		roomNumber VARCHAR(4), numPatients INT, maxSize INT, patients TEXT, status VARCHAR(20)
		
		itemName VARCHAR(20), itemPrice DOUBLE, itemDescription VARCHAR(50), itemQuantity INT


		*/
		/*(gcnew SQLiteCommand("CREATE TABLE IF NOT EXISTS Patients (patientID VARCHAR(8), name VARCHAR(32), dateOfBirth VARCHAR(10), address VARCHAR(80), homePhone VARCHAR(10), workPhone VARCHAR(10), fax VARCHAR(10), email VARCHAR(320), emergencyContact VARCHAR(32), roomNumber VARCHAR(4), doctor VARCHAR(8), nurse VARCHAR(8), bill DOUBLE, ailment VARCHAR(100), insurance VARCHAR(32));", this->sqlLiteDB))->ExecuteNonQuery();
		(gcnew SQLiteCommand("CREATE TABLE IF NOT EXISTS Doctors (employeeID VARCHAR(8), clockedIn INT, salary VARCHAR(10), hoursWorkedPerWeek INT, experience INT, degree VARCHAR(20), specialization VARCHAR(20), patient VARCHAR(8), name VARCHAR(32), dateOfBirth VARCHAR(10), address VARCHAR(80), homePhone VARCHAR(10), workPhone VARCHAR(10), fax VARCHAR(10), email VARCHAR(320), emergencyContact VARCHAR(32));", this->sqlLiteDB))->ExecuteNonQuery();
		(gcnew SQLiteCommand("CREATE TABLE IF NOT EXISTS Nurses (employeeID VARCHAR(8), clockedIn INT, salary VARCHAR(10), hoursWorkedPerWeek INT, experience INT, degree VARCHAR(20), specialization VARCHAR(20), patient VARCHAR(8), name VARCHAR(32), dateOfBirth VARCHAR(10), address VARCHAR(80), homePhone VARCHAR(10), workPhone VARCHAR(10), fax VARCHAR(10), email VARCHAR(320), emergencyContact VARCHAR(32));", this->sqlLiteDB))->ExecuteNonQuery();
		(gcnew SQLiteCommand("CREATE TABLE IF NOT EXISTS OtherEmployees (employeeID VARCHAR(8), clockedIn INT, salary VARCHAR(10), hoursWorkedPerWeek INT, experience INT, name VARCHAR(32), dateOfBirth VARCHAR(10), address VARCHAR(80), homePhone VARCHAR(10), workPhone VARCHAR(10), fax VARCHAR(10), email VARCHAR(320), emergencyContact VARCHAR(32));", this->sqlLiteDB))->ExecuteNonQuery();
		(gcnew SQLiteCommand("CREATE TABLE IF NOT EXISTS Rooms (roomNumber VARCHAR(4), numPatients INT, maxSize INT, patients TEXT, status VARCHAR(20));", this->sqlLiteDB))->ExecuteNonQuery();
		(gcnew SQLiteCommand("CREATE TABLE IF NOT EXISTS Inventory (itemName VARCHAR(20), itemPrice DOUBLE, itemDescription VARCHAR(50), itemQuantity INT);", this->sqlLiteDB))->ExecuteNonQuery();
		*/
		(gcnew SQLiteCommand("CREATE TABLE IF NOT EXISTS Patients (patientID VARCHAR(8), name VARCHAR(32), dateOfBirth VARCHAR(10), address VARCHAR(80), homePhone VARCHAR(10), cellPhone VARCHAR(10), workPhone VARCHAR(10), fax VARCHAR(10), email VARCHAR(320), emergencyContact VARCHAR(32), roomNumber VARCHAR(4), doctor VARCHAR(8), nurse VARCHAR(8), bill DOUBLE, ailment VARCHAR(100), insurance VARCHAR(32));" \
			"CREATE TABLE IF NOT EXISTS Doctors (employeeID VARCHAR(8), clockedIn INT, salary VARCHAR(10), hoursWorkedPerWeek INT, experience INT, degree VARCHAR(20), specialization VARCHAR(20), patients TEXT, name VARCHAR(32), dateOfBirth VARCHAR(10), address VARCHAR(80), homePhone VARCHAR(10), cellPhone VARCHAR(10), workPhone VARCHAR(10), fax VARCHAR(10), email VARCHAR(320), emergencyContact VARCHAR(32));" \
			"CREATE TABLE IF NOT EXISTS Nurses (employeeID VARCHAR(8), clockedIn INT, salary VARCHAR(10), hoursWorkedPerWeek INT, experience INT, degree VARCHAR(20), specialization VARCHAR(20), patients TEXT, name VARCHAR(32), dateOfBirth VARCHAR(10), address VARCHAR(80), homePhone VARCHAR(10), cellPhone VARCHAR(10), workPhone VARCHAR(10), fax VARCHAR(10), email VARCHAR(320), emergencyContact VARCHAR(32));" \
			"CREATE TABLE IF NOT EXISTS OtherEmployees (employeeID VARCHAR(8), clockedIn INT, salary VARCHAR(10), hoursWorkedPerWeek INT, experience INT, name VARCHAR(32), dateOfBirth VARCHAR(10), address VARCHAR(80), homePhone VARCHAR(10), cellPhone VARCHAR(10), workPhone VARCHAR(10), fax VARCHAR(10), email VARCHAR(320), emergencyContact VARCHAR(32));" \
			"CREATE TABLE IF NOT EXISTS Rooms (roomNumber VARCHAR(4), numPatients INT, maxSize INT, patients TEXT, status VARCHAR(20));" \
			"CREATE TABLE IF NOT EXISTS Inventory (itemName VARCHAR(20), itemPrice DOUBLE, itemDescription VARCHAR(50), itemQuantity INT);",
			this->sqlLiteDB))->ExecuteNonQuery();
	}
	MedicalEmployee DatabaseManager::getMedicalEmployee(String ^ employeeType, String ^ employeeID)
	{
		MedicalEmployee employee;
		SQLiteCommand ^command = gcnew SQLiteCommand(String::Format("SELECT * FROM {0} WHERE employeeID='{1}';", employeeType, employeeID), this->sqlLiteDB);
		SQLiteDataReader ^reader = command->ExecuteReader();
		if (reader->Read())
		{
			employee = MedicalEmployee(msclr::interop::marshal_as<std::string>((String^)reader["name"]),
				msclr::interop::marshal_as<std::string>((String^)reader["dateOfBirth"]),
				msclr::interop::marshal_as<std::string>((String^)reader["emergencyContact"]),
				ContactInformation(msclr::interop::marshal_as<std::string>((String^)reader["address"]),
					msclr::interop::marshal_as<std::string>((String^)reader["homePhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["cellPhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["workPhone"]),
					msclr::interop::marshal_as<std::string>((String^)reader["fax"]),
					msclr::interop::marshal_as<std::string>((String^)reader["email"])
				),
				msclr::interop::marshal_as<std::string>((String^)reader["employeeID"]),
				(int)reader["clockedIn"],
				msclr::interop::marshal_as<std::string>((String^)reader["salary"]),
				(int)reader["hoursWorkedPerWeek"],
				(int)reader["experience"],
				msclr::interop::marshal_as<std::string>((String^)reader["degree"]),
				msclr::interop::marshal_as<std::string>((String^)reader["specialization"]));

			array<String^> ^patients = ((String^)reader["patients"])->Split('\n');
			for (int i = 0; i < patients->Length; i++)
			{
				employee.addPatient(getPatient(patients[i]));
			}
		}
		return employee;
	}
	bool DatabaseManager::tableExists(String ^table)
	{
		SQLiteCommand ^command = gcnew SQLiteCommand(String::Format("SELECT COUNT(*) FROM sqlite_master WHERE type = 'table' AND name ='{0}'", table), this->sqlLiteDB);
		return (int::Parse(command->ExecuteScalar()->ToString()) != 0);
	}
}
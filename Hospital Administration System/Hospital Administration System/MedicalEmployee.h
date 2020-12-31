#pragma once

#include "Employee.h"
#include "Patient.h"
#include <vector>

class MedicalEmployee : public Employee 
{
public:
	/*
			Name:			MedicalEmployee
			Description:	
			Parameters:		N/A
	*/
	MedicalEmployee();
	MedicalEmployee(std::string name, std::string dateOfBirth, std::string emergencyContact, ContactInformation &contactInfo, std::string employeeID, int clockedIn, std::string salary, int hoursWorkedPerWeek, int experience, std::string degree, std::string specialization);
	std::string getDegree() const;
	void setDegree(const std::string degree);
	std::string getSpecialization() const;
	void setSpecialization(std::string specialization);

	Patient getPatient(std::string patientID) const;
	bool addPatient(const Patient patient);
	bool removePatient(std::string patientID);
	bool hasPatient(const Patient patient);
	std::vector<Patient> getPatients() const;
	void clearPatients();

private:
	std::string degree,
		specialization;
	std::vector<Patient> patients;
};
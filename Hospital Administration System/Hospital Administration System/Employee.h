#pragma once

#include"Person.h"

class Employee : public Person 
{
public:
	Employee();
	Employee(std::string name, std::string dateOfBirth, std::string emergencyContact, ContactInformation &contactInfo, std::string employeeID, int clockedIn, std::string salary, int hoursWorkedPerWeek, int experience);
	bool operator==(const Employee &employee);
	
	std::string getEmployeeID() const;
	void setEmployeeID(const std::string employeeID);
	int getClockedIn() const;
	void setClockedIn(const int clockedIn);
	std::string getSalary() const;
	void setSalary(const std::string salary);
	int getHoursWrokedPerWeek() const;
	void setHoursWorkedPerWeek(const int hoursWorkedPerWeek);
	int getExperience() const;
	void setExperience(const int experience);
	
private:
	std::string employeeID,
		salary;
	int clockedIn,
		hoursWorkedPerWeek,
		experience;
};
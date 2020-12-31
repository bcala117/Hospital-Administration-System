#pragma once

#include<vector>
#include"Patient.h"

class Room
{
public:
	Room();
	/*
		Name:			Constructor.
		Description:	Initialize instance of Room class.
	*/
	Room(std::string roomNumber, size_t maxSize);

	bool operator==(const Room & room);

	std::string getRoomNumber() const;

	void setRoomNumber(const std::string roomNumber);
	/*
		Name:			getNumPatients
		Description:	Returns Num Of Patient's
		Parameters:		N/A
	*/
	int getNumPatients() const;

	/*
		Name:			getMaxSize
		Description:	Returns MaxSize of room
		Parameters:		N/A
	*/
	int getMaxSize() const;
	/*
		Name:			setMaxSize
		Description:	Sets The Value of MaxSize
		Parameters:		int maxSize
	*/
	void setMaxSize(const int maxSize);

	/*
		Name:			getPatients
		Description:	Returns a list of patients that are currently residing in this room.
	*/
	std::vector<Patient> getPatients() const;

	/*
		Name:			getPatient
		Description:	Returns a patient that is currently residing in this room.
	*/
	Patient getPatient(std::string patientID) const;

	/*
		Name:			addPatient
		Description:	Returns True or False
		Parameters:		Patient& patient
	*/
	bool addPatient(Patient patient);

	/*
		Name:			removePatient
		Description:	Returns True or False
		Parameters:		
						@patientID  The patient to remove
	*/
	bool removePatient(std::string patientID);

	void clearRoom();
	
private:
	int maxSize;
	std::string roomNumber;
	std::vector<Patient> patients;
};
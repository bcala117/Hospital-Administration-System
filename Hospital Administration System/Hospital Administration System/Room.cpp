#include "Room.h"

Room::Room() : maxSize(0)
{
}

Room::Room(std::string roomNumber, size_t maxSize)
{
	this->roomNumber = roomNumber;
	this->maxSize = maxSize;
}

bool Room::operator==(const Room & room)
{
	return this->roomNumber == room.roomNumber;
}

std::string Room::getRoomNumber() const
{
	return this->roomNumber;
}

void Room::setRoomNumber(const std::string roomNumber)
{
	this->roomNumber = roomNumber;
}

int Room::getNumPatients() const
{
	return this->patients.size();
}

int Room::getMaxSize() const
{
	return this->maxSize;
}

void Room::setMaxSize(const int maxSize)
{
	this->maxSize = maxSize;
}

std::vector<Patient> Room::getPatients() const
{
	return patients;
}

Patient Room::getPatient(std::string patientID) const
{
	for (Patient p : patients)
	{
		if (p.getPatientID() == patientID)
			return p;
	}
	return Patient();
}

bool Room::addPatient(Patient patient)
{
	for (Patient p : patients)
	{
		if (p == patient)
			return false;
	}
	patients.push_back(patient);
	return true;
}

bool Room::removePatient(std::string patientID)
{
	size_t index = 0;
	for (Patient p : patients)
	{
		if (p.getPatientID() == patientID)
		{
			patients.erase(patients.begin() + index);
			return true;
		}
		index++;
	}
	return false;
}

void Room::clearRoom()
{
	patients.clear();
}

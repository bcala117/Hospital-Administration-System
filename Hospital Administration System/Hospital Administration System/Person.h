#pragma once

#include <string>
#include "ContactInformation.h"

class Person 
{
public:
	Person(std::string name, std::string dateOfBirth, std::string emergencyContact, ContactInformation contactInfo);

	std::string getName() const;
	void setName(const std::string name);
	std::string getDateofBirth() const;
	void setDateofBirth(const std::string dateOfBirth);
	std::string getEmergencyContact() const;
	void setEmergencyContact(const std::string emergencyContact);

	ContactInformation getContactInfo() const;
	void setContactInfo(const ContactInformation &contactInfo);

private:
	std::string name,
		dateOfBirth,
		emergencyContact;

	ContactInformation contactInfo;
};
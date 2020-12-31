#pragma once

#include <string>

class ContactInformation
{
public:
	ContactInformation();
	ContactInformation(std::string address, std::string homePhone, std::string cellPhone, std::string workPhone, std::string fax, std::string email);

	std::string getAddress() const;
	void setAddress(const std::string address);

	std::string getHomePhone() const;
	void setHomePhone(const std::string homePhone);

	std::string getCellPhone() const;
	void setCellPhone(const std::string cellPhone);

	std::string getWorkPhone() const;
	void setWorkPhone(const std::string workPhone);

	std::string getFaxNumber() const;
	void setFaxNumber(const std::string fax);

	std::string getEmail() const;
	void setEmail(const std::string email);
private:
	std::string address,
		homePhone,
		cellPhone,
		workPhone,
		fax,
		email;
};
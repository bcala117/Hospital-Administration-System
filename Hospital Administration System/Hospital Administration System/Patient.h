#pragma once

#include"Person.h"

class Patient : public Person 
{
public:

	Patient();
	/*
		Name:			Constructor.
		Description:	Initialize instance of Room class.
		Parameters:
		
						@Patient info
	*/
	Patient(std::string name, std::string dateOfBirth, std::string emergencyContact, ContactInformation &contactInfo, std::string patientID, std::string roomNumber, std::string doctorID, std::string nurseID, double bill, std::string ailment, std::string insurance);
	
	bool operator==(const Patient &patient);

	/*
		Name:			getPatientID
		Description:	Returns Patient's ID
		Parameters:		N/A
	*/
	std::string getPatientID() const;
	
	/*
		Name:			setPatientID
		Description:	Sets The Value Of PatientsID
		Parameters:		string Patients ID
	*/
	void setPatientID(const std::string patientID);
	
	/*
		Name:			getRoomNumber
		Description:	Returns Patient's ID
		Parameters:		N/A
	*/
	std::string getRoomNumber() const;
	
	/*
		Name:			setRoomNumber
		Description:	Sets The Value Of RoomNumber
		Parameters:		string roomNumber
	*/
	void setRoomNumber(const std::string roomNumber);
	
	/*
		Name:			getDoctor
		Description:	Returns the Employee ID of the patients doctor.
	*/
	std::string getDoctor() const;
	
	/*
		Name:			setDoctor
		Description:	Sets the patient to a Doctor
		Parameters:		
						@doctor  The patients doctor's employee ID.
	*/
	void setDoctor(const std::string doctor);
	
	/*
		Name:			getNurse
		Description:	Returns Nurse
		Parameters:		N/A
	*/
	std::string getNurse() const;
	
	/*
		Name:			setNurse
		Description:	Sets the patient to a Nurse
		Parameters:		(composition) MedicalEmployee Nurse
	*/
	void setNurse(const std::string nurse);
	
	/*
		Name:			getBillingInfo
		Description:	Returns BillingInfo
		Parameters:		N/A
	*/
	double getBillingInfo() const;
	
	/*
		Name:			setBillingInfo
		Description:	Sets the BillingInfo
		Parameters:		double bill
	*/
	void setBillingInfo(const double bill);
	
	/*
		Name:			getAilment
		Description:	Returns Ailment
		Parameters:		N/A
	*/
	std::string getAilment() const;
	
	/*
		Name:			setAilment
		Description:	Sets the Ailment of patient
		Parameters:		string ailment
	*/
	void setAilment(const std::string ailment);
	
	/*
		Name:			getInsurance
		Description:	Returns Insurance
		Parameters:		N/A
	*/
	std::string getInsurance() const;
	
	/*
		Name:			setInsurance
		Description:	Sets the Insurance
		Parameters:		string Insurance
	*/
	void setInsurance(const std::string insurance);

private:
	double bill;
	std::string patientID,
		roomNumber,
		ailment, 
		insurance,
		doctorID,
		nurseID;

};
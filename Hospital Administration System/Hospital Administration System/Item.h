#pragma once

#include <string>

class Item
{
public:
	Item();
	Item(std::string itemName, double itemPrice, int quantity, std::string discription);

	std::string getItemName() const;
	void setItemName(const std::string itemName);

	double getItemPrice() const;
	void setItemDiscription(const double itemPrice);

	int getQuantity() const;
	void setQuantity(const int quantity);

	std::string getDescription() const;
	void setDescription(const std::string discription);
private:
	std::string itemName,
		description;
	double itemPrice;
	int quantity;
};
#pragma once
#include "Library.h"

#include <map>

struct Account
{
	std::string Email;
	std::string Username;
	std::string Password;
	uint16_t Age;
	//std::map < std::string, int> Product_Quantity;
	std::vector<Book*> CartInventory; 
	~Account();
	Account(const std::string& email, const std::string& password,const std::string& username, uint16_t age);
};
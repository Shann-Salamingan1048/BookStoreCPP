#include "Accounts.h"


Account :: ~Account()
{
	for (auto& i : this->CartInventory)
		delete i;
	std::cout << "Account Destructor has been Activated!\n";
}
Account::Account(const std::string& email, const std::string& password,const std::string& username, uint16_t age)
{
	this->Email = email;
	this->Username = username;
	this->Age = age;
	this->Password = password;

}

#include "BookStore.h"
BookStore::~BookStore()
{
	for (auto& i : this->Accounts)
		delete i;
	std::cout << "Book Store Destructor has been called!" << "\n";
}
BookStore::BookStore()
{
	this->initAccs();
}
void BookStore::run() 
{
	short chosen = 0;
	std::cout << "1. Log In\n2. Sign Up\n";
	std::cin >> chosen;
	this->clrScrn();
	switch (chosen)
	{
		case 1:
			LogIn();
			break;
		case 2:
			break;
		default:
			std::cout << "Please choose between 1 and 2\n";
			break;
	}
}
void BookStore::LogIn()
{
	std::string email;
	std::cout << "Enter Your Email: ";
	std::cin.ignore();
	std::getline(std::cin, email);
	clrScrn();
	//Use std::find_if with a lambda function to search for the account with the matching email
	auto it = std::find_if(Accounts.begin(), Accounts.end(), [&email](const Account* acc) {
		return acc->Email == email;
		});
	
	if (it != Accounts.end())
	{
		std::cout << "Welcome " << (*it)->Username; // Dereference the pointer before accessing the member
	}
	else
	{
		std::cout << "Not found!\n";
	}
}
void BookStore::initAccs()
{
	Account acc1("admin@gmail.com", "Admin123", "Admin Ako", 19);

	acc1.CartInventory.push_back(lib.Books[1]);
	acc1.CartInventory.push_back(lib.Books[0]);
}
void BookStore::clrScrn()
{
	system("cls"); // Clear the console screen on Windows
}
#pragma once
#include "Accounts.h"
#include <Windows.h>

class BookStore
{
private:
	Library lib; // this is the problem
	std::vector<Account*> Accounts;
	void initAccs();
	void LogIn();
	void SignUp();
	void clrScrn();
public:
	void run();
	~BookStore();
	BookStore();
};
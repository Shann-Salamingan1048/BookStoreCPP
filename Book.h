#pragma once
#include <string>
#include <vector>
#include <iostream>
struct Book
{
	std::string Author;
	std::string Title;
	double Price;
	Book(const std::string& author, const std::string& title, double price) : Author(author), Title(title), Price(price) {}
};
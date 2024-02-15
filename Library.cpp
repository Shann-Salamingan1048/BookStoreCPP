#include "Library.h"
Library::~Library()
{
	for (auto& i : this->Books)
		delete i;
	std::cout << "Library Destructor!\n";
}
Library::Library()
{
	// Books
	this->Books.push_back(new Book("Shann Delfin C. Salamingan","C++ With Shann",1023.52));
	this->Books.push_back(new Book("Shain Kylie","Make-Up Advance", 674.33));
	this->Books.push_back(new Book("Sanji","Cooking with Sanji", 779.42));
}

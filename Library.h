#pragma once
#include "Book.h"
struct Library
{
	std::vector<Book*> Books;
	~Library();
	Library();
};



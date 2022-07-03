#pragma once
#include <iostream>
#include <string>
#include "Common.h"

using namespace std;


struct Book
{
	string Title;
	int YearPublication;
	int NumberPages;
	string Authors[10];
	int NumberAuthors;
};

void DemoBook();

void ReadBookFromConsole(Book& book);

void WriteBookToConsole(Book& book);


int FindBookByAuthor(Book* books, int booksCount, string author);

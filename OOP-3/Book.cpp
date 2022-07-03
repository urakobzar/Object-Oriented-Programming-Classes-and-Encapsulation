#include "Book.h"


void DemoBook()
{
	Book book[5];
	int countBooks;
	while (true)
	{
		cout << "Enter a count of books: ";
		countBooks = ReadingCorrectSize();
		if (countBooks <= 5)
		{
			break;
		}
		cout << "\nYou mistakes. Try again";
		cout << "\nThe number of books should be in the range of 1-5\n";
	}
	for (int i = 1; i <= countBooks; i++)
	{
		ReadBookFromConsole(book[i]);
		cout << endl << endl;
	}
	for (int i = 1; i <= countBooks; i++)
	{
		WriteBookToConsole(book[i]);
		cout << endl << endl;
	}
	cout << "\nEnter the author to search for the book: ";
	string author;
	cin >> author;
	if (FindBookByAuthor(book, countBooks, author) != -1)
	{
		cout << "\nAuthor's book:\n";
		WriteBookToConsole(book[FindBookByAuthor(book, countBooks, author)]);
	}
	else
	{
		cout << "\nThere is no book with this author\n";
	}
}

void ReadBookFromConsole(Book& book)
{
	cout << "Enter a Title: ";
	cin >> book.Title;
	while (true)
	{
		cout << "Enter a Year of Publication: ";
		book.YearPublication = ReadingCorrectSize();
		if (book.NumberAuthors <= 2021)
		{
			break;
		}
		cout << "\nYou mistakes. Try again";
		cout << "\nThe value must be no more than the current year\n";
	}
	cout << "Enter a Number Pages: ";
	book.NumberPages = ReadingCorrectSize();
	while (true)
	{
		cout << "Enter a Number Authors: ";
		book.NumberAuthors = ReadingCorrectSize();
		if (book.NumberAuthors <= 10)
		{
			break;
		}
		cout << "\nYou mistakes. Try again";
		cout << "\nThe number of authors should be in the range of 1-10\n";
	}
	for (int i = 1; i <= book.NumberAuthors; i++)
	{
		cout << "Enter a Author: ";
		cin >> book.Authors[i];
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}	
}

void WriteBookToConsole(Book& book)
{
	for (int i = 1; i <= book.NumberAuthors; i++)
	{
		if (i != book.NumberAuthors)
		{
			cout << book.Authors[i] << ", ";
		}
		else
		{
			cout << book.Authors[i] << " ";
		}		
	}
	cout << book.Title << ". ";
	cout << book.YearPublication << ". - ";
	cout << book.NumberPages << " pages.\n";
}

int FindBookByAuthor(Book* books, int booksCount, string author)
{
	for (int i = 1; i <= booksCount; i++)
	{
		for (int j = 1; j <= books[i].NumberAuthors; j++)
		{
			if (books[i].Authors[j] == author)
			{
				return i;
			}
		}
	}
	return -1;
}

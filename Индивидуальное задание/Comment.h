#pragma once
#include <iostream>
#include <string>
using namespace std;


class Comment
{
private:
	string _author;
	string _text;
	int _rate;

public:
	string GetAuthor();

	string GetText();

	int GetRate();

	void SetAuthor(string author);

	void SetText(string text);

	void SetRate(int rate);

	Comment(string author, string text, int rate);

	Comment();
};
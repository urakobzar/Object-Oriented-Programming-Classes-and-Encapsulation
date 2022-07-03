#include "Comment.h"


string Comment::GetAuthor()
{
	return this->_author;
}

string Comment::GetText()
{
	return this->_text;
}

int Comment::GetRate()
{
	return this->_rate;
}

void Comment::SetAuthor(string author)
{
	this->_author = author;
}

void Comment::SetText(string text)
{
	this->_text = text;
}

void Comment::SetRate(int rate)
{
	if ((rate < 0) || (rate>5))
	{
		throw exception("Rate must be between 0 and 5");
	}
	this->_rate = rate;
}

Comment::Comment(string author, string text, int rate)
{
	this->SetAuthor(author);
	this->SetText(text);
	this->SetRate(rate);
}

Comment::Comment()
{

}
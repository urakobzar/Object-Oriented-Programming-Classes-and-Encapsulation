#include "Place.h"

string Place::GetName()
{
	return this->_name;
}

Comment* Place::GetComment()
{
	return this->_comments;
}

int Place::GetCommentsCount()
{
	return this->_commentsCount;
}

void Place::SetName(string name)
{
	this->_name = name;
}

void Place::SetComments(Comment* comments)
{
	this->_comments = comments;
}

void Place::SetCommentsCount(int commentsCount)
{
	this->_commentsCount = commentsCount;
}

Place::Place(string name, Comment* comments, int commentsCount)
{
	this->SetName(name);
	this->SetComments(comments);
	this->SetCommentsCount(commentsCount);
}

Place::Place()
{

}

double Place::GetRate()
{
	double sum = 0;
	for (int j = 0; j < 3; j++)
	{
		sum = sum + this->_comments[j].GetRate();
	}
	return sum / 3;
}
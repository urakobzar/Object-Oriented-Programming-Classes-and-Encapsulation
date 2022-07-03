#pragma once
#include <iostream>
#include <string>
#include "Comment.h"
using namespace std;





class Place
{
private:
	string _name;
	Comment* _comments;
	int _commentsCount;

public:

	string GetName();

	Comment* GetComment();

	int GetCommentsCount();

	void SetName(string name);

	void SetComments(Comment* comments);

	void SetCommentsCount(int commentsCount);

	Place(string name, Comment* comments, int commentsCount);

	Place();

	double GetRate();
};
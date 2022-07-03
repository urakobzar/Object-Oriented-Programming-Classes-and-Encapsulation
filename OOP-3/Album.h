#pragma once
#include "Song.h"


class Album
{
private:
	string _titleAlbum;
	int _year;
	Song* _albumSong;
public:

	Album();

	Album(string titleAlbum, int year, Song* albumSong);

	void SetAlbum(string titleAlbum, int year, Song* albumSong);

	string GetTitleAlbum();

	Song* GetAlbumSong();
};



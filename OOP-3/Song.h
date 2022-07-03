#pragma once
#include <exception>
#include <iostream>
#include <string>

using namespace std;

enum Genre
{
	FolkMusic,
	Country,
	Blues,
	Jazz,
	Romance,
	ElectonicMusic
};

class Song
{
private:
	string _titleSong = "";
	int _duration;
	enum Genre _genreMusic;
public:

	Song();

	Song(string titleSong, int duration, Genre genreSong);

	void SetSong(string titleSong, int duration, Genre genreSong);

	void SetSongTitle(string titleSong);

	string GetSongTitle();

	enum Genre GetGenreMusic();
};







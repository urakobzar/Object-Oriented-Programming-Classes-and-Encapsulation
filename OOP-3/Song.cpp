#include "Song.h"


Song::Song(string titleSong, int duration, Genre genreSong)
{
	this->SetSong(titleSong, duration, genreSong);
}


void Song::SetSong(string titleSong, int duration, Genre genreSong)
{
	this->_titleSong = titleSong;
	this->_duration = duration;
	this->_genreMusic = genreSong;
}

void Song::SetSongTitle(string titleSong)
{
	this->_titleSong = titleSong;
}

string Song::GetSongTitle()
{
	return this->_titleSong;
}

Genre Song::GetGenreMusic()
{
	return this->_genreMusic;
}

Song::Song()
{

}

#include "Album.h"


Album::Album()
{

}

Album::Album(string titleAlbum, int year, Song* albumSong)
{
	this->SetAlbum(titleAlbum, year, albumSong);
}

void Album::SetAlbum(string titleAlbum, int year, Song* albumSong)
{
	this->_titleAlbum = titleAlbum;
	this->_year = year;
	this->_albumSong = albumSong;
}

string Album::GetTitleAlbum()
{
	return this->_titleAlbum;
}

Song* Album::GetAlbumSong()
{
	return this->_albumSong;
}

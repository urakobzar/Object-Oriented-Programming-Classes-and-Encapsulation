#pragma once
#include "Album.h"

class Band
{
private:
	string _titleBand;
	string _history;
	Album* _albumBand;
public:
	Band();

	Band(string titleBand, string history, Album* albumBand);

	void SetBand(string titleBand, string history, Album* albumBand);

	Song* FindSong(string songTitle);

	Album* FindAlbum(string songTitle);

	Song* GetAllSongs(int& allSongsCount);

	Song* GetAllGenreSongs(Genre findingGenre, int& allSongsCount);

	void DemoBand();
};




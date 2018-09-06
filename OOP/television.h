#pragma once

class Television {

private:
	int currentChannel = 1;
	int currentVolume = 1;

public:
	// returns current volume
	int volume();
	// returns current channel
	int channel();
	// increases volume by 1
	void increaseVolume();
	// increases volume by given
	void increaseVolume(int increment);
	// increases channel by 1
	void increaseChannel();
	// increases channel by given
	void increaseChannel(int increment);
	// decreases volume by 1
	void decreaseVolume();
	// decreases volume by given
	void decreaseVolume(int increment);
	// decreases channel by 1
	void decreaseChannel();
	// decreases channel by given
	void decreaseChannel(int increment);

};
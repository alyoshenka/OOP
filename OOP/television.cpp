#include "television.h"

// returns current volume
int Television::volume() {
	return currentVolume;
}

// returns current channel
int Television::channel() {
	return currentChannel;
}

// increases volume by 1
void Television::increaseVolume() {
	if (currentVolume < 100) {
		currentVolume++;
	}
}

// increases volume by given
void Television::increaseVolume(int increment) {
	currentVolume += increment;
	if (currentVolume > 100) {
		currentVolume = 100;
	}
}

// increases channel by 1
void Television::increaseChannel() {
	if (currentChannel < 100) {
		currentChannel++;
	}
}

// increases channel by given
void Television::increaseChannel(int increment) {
	currentChannel += increment;
	if (currentChannel > 100) {
		currentChannel = 100;
	}
}

// decreases volume by 1
void Television::decreaseVolume() {
	if (currentVolume > 0) {
		currentVolume--;
	}
}

// decreases volume by given
void Television::decreaseVolume(int increment) {
	currentVolume -= increment;
	if (currentVolume < 0) {
		currentVolume = 0;
	}
}

// decreases channel by 1
void Television::decreaseChannel() {
	if(currentChannel > 0) {
		currentChannel--;
	}
}

// decreases channel by given
void Television::decreaseChannel(int increment) {
	currentChannel -= increment;
	if (currentChannel < 0) {
		currentChannel = 0;
	}
}
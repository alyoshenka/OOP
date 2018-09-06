#include "PiggyBank.h"

void PiggyBank::deposit(float net) {
	// this->
	currentBalance += net;
}

float PiggyBank::withdraw() {
	float temp = currentBalance;
	currentBalance = 0;
	return temp;
}

float PiggyBank::balance() {
	return currentBalance;
}
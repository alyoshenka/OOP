#include "person.h"
#include <iostream>

void Person::Greet() {
	std::cout << "Hello" << std::endl;
}

int Person::getAge() {
	return age;
}

float Person::netWorth() {
	return cash;
}

void Person::addCash(float money) {
	cash += money;
}
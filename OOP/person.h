#pragma once
class Person {

private:
	int age;
	float cash;
	
public:
	void Greet();
	int getAge();
	float netWorth();
	void addCash(float money);
};
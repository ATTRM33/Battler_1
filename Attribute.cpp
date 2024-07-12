#include "Attribute.h"
#include "Die.h"
#include <iostream>
#include <string>

using namespace std;

Attribute::Attribute() 
{
	Die die1;
	Die die2;
	Die die3;

	baseScore = die1.getFaceValue() + die2.getFaceValue() + die3.getFaceValue();

	currentScore = baseScore;
};
Attribute::Attribute(string n) {
	name = n;
	Die die;

	for (int i = 0; i < 3; i++) {

		baseScore += die.getFaceValue();
	}

	currentScore = baseScore;
};

Attribute::Attribute(string n, int value) {
	name = n;
	baseScore = value;
	currentScore = baseScore;
};

string Attribute::getName() {
	return name;
}
void Attribute::setName(string n) {
	name = n;
}
int Attribute::getSCore() {
	return baseScore;
}
void Attribute::modifyScore(int mod) {
	currentScore += mod;
}
int Attribute::getModifier() {

	return (currentScore-10)/2;
}
void Attribute::resetCurrentScore() {
	currentScore = baseScore;
}

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

string Attribute::getName() {
	return name;
}
string Attribute::setName(string n) {
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

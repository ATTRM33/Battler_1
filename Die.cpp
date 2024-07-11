#include "Die.h"
#include <iostream>
#include <string>

using namespace std;

Die::Die() :
	
SIDES(6) //member intialization list
{
	roll();
}

Die::Die(int sides) :

SIDES(sides) {

	roll();
}

void Die::roll() {
	faceValue = rand() % SIDES + 1;
}

int Die:: getSides() {
	return SIDES;
}

int Die::getFaceValue() {
	return faceValue;
}

std::string Die::dieToString() {
	string result = "A " + to_string(SIDES) + "-sided Die showing a " + to_string(faceValue);
	return result;
}


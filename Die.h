#pragma once
#ifndef DIE_H
#define DIE_H


#include <iostream>

class Die
{
private:
	int faceValue;
	const int SIDES;
public:
	Die();
	Die(int sides);
	void roll();
	int getFaceValue();
	std::string dieToString();
	int getSides();

};

#endif 

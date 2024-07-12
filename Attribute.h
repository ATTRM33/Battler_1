#pragma once
#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

class Attribute
{private:
	string name;
	int baseScore;
	int currentScore;
public:
	Attribute();
	Attribute(string n);
	Attribute(string n, int value);

	string getName();
	string setName(string name);
	int getSCore();
	void modifyScore(int mod);
	int getModifier();
	void resetCurrentScore();
};

#endif
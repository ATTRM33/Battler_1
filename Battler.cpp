//Zach Brown
//Date: 
//CS2 

#include <iostream>
#include <ctime>
#include <string>
#include "Die.h"
#include "Attribute.h"

using namespace std;

int main() {

	srand(time(0));

	Die Die1;
	Die Die2(20);
	Die Die3;
	

	
	cout << Die1.dieToString() << endl;
	cout << Die2.dieToString() << endl;
	cout << Die3.dieToString() << endl;
	
}
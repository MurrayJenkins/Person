//============================================================================
// Name        : Person.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.hpp"
using namespace std;

int main()
{
	Person matt("Matthew Alan Pitts");
	Person sarah("Sarah Gene Willoughby");

	string husband = matt.getName();
	string wifeMaiden = sarah.getName();

	cout << husband << " met " << wifeMaiden << " at USAO. " << endl << "When they got married, "
			<< wifeMaiden << " changed her name to ";

	sarah.setName("Sarah Gene Pitts");
	string wife = sarah.getName();

	cout << wife << ".";

	return 0;
}

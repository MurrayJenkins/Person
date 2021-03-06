//============================================================================
// Name        : Person.cpp
// Author      : Matthew Alan Pitts
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
#include <vector>
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
	cout << wife << "." << endl;

	// this adds a vector of people, and prints them out.
	std::vector<Person*> individual;
	individual.push_back(&matt);
	individual.push_back(&sarah);
	cout << endl << "List of people:" << endl;
	for (auto i : individual)
	{
		i->getInfo();
	}

	return 0;
}

/*
 * Person.hpp
 *
 *  Created on: Dec 14, 2020
 *      Author: Matthew
 */

#ifndef PERSON_HPP_
#define PERSON_HPP_
#include <iostream>

class Person
{
	private:
		std::string name;
	public:
		Person(std::string name);
		virtual ~Person();

		std::string getName()
		{
			return name;
		}
};

#endif /* PERSON_HPP_ */

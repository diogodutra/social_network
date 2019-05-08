#ifndef SOCIAL_NETWORK_H
#define SOCIAL_NETWORK_H

#include "person.hpp"
#include <vector>

class SocialNetwork
{
private:
	
public:	
	vector<class Person> persons = {};
	
	int addPerson(const string name);
	int getPopulationSize(void) const;
	//vector<class Person> findPersons(const string name);
	int findPersonId(const string name) const;
	Person * personNamed(const string name); //const
	bool printPerson(const int id) const;
	void printPopulation(void) const;
};

#endif
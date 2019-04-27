#ifndef PERSON_H
#define PERSON_H

#include "pubsub.hpp"

class Person : public Publisher, public Subscriber
{
private:
	static int total_population;
	int id;
	
public:
	Person(string name);
	int getTotalPopulation(void);
};

#endif
#ifndef PERSON_H
#define PERSON_H

#include "pubsub.hpp"

class Person : public Publisher, public Subscriber
{
public:
	Person(const string name);
	Person();
	
	string getName(void) const;
	
	void print(void) const;
};

#endif
#include "person.hpp"

int Person::total_population = 0;

Person::Person(string name) : Publisher(name), Subscriber(name)
{
	this->id = this->total_population++;
}

int Person::getTotalPopulation(void)
{
	return (total_population);
}
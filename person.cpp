#include "person.hpp"

Person::Person(const string name) : Publisher(name), Subscriber(name)
{
	
}

string Person::getName(void) const
{
	return this->Publisher::name;
}

void Person::print(void) const
{
	cout << "Name: " << this->getName();
	cout << " ; Followers: ";
	
	vector<class AObserver*> followers = this->getFollowers();
	
	for (int j=0; j<followers.size(); j++)
	{
		cout << followers.at(j)->name << " , ";
	}
	
	cout << flush;
}
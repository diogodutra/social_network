//Observer Design Pattern applied for Twitter-like app

#include "pubsub.hpp"

Publisher::Publisher(const string name)
{
	this->name = name;
}

void Publisher::attach(AObserver *sub)
{
	subscribers.push_back(sub);
}

int Publisher::says(const string speech)
{
	cout << name << " says: " << speech << '\n';
	
	int totalSubscribers = geTotalFollowers();
	
	for (int i = 0; i < totalSubscribers; i++)
		subscribers[i]->hears(speech);
	
	return totalSubscribers;
}

vector < class AObserver * > Publisher::getFollowers(void) const
{
	return this->subscribers;
}

int Publisher::geTotalFollowers(void) const
{
	return subscribers.size();
}

AObserver::AObserver(const string name)
{
	this->name = name;
}

void AObserver::follow(Publisher *pub)
{
	pub->attach(this);
}

void Subscriber::hears(const string speech)
{
	cout << this->name << " hears: " << speech << '\n';
}
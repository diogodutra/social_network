//Observer Design Pattern applied for Twitter-like app

#include "pubsub.hpp"

Publisher::Publisher(string name)
{
	this->name = name;
}

void Publisher::attach(AObserver *sub)
{
	subscribers.push_back(sub);
}

int Publisher::says(string speech)
{
	cout << name << " says: " << speech << '\n';
	
	int totalSubscribers = geTotalFollowers();
	
	for (int i = 0; i < totalSubscribers; i++)
		subscribers[i]->hears(speech);
	
	return totalSubscribers;
}

int Publisher::geTotalFollowers()
{
	return subscribers.size();
}

AObserver::AObserver(string name)
{
	this->name = name;
}

void AObserver::follow(Publisher *pub)
{
	pub->attach(this);
}

void Subscriber::hears(string speech)
{
	cout << name << " hears: " << speech << '\n';
}
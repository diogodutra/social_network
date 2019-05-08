//Observer Design Pattern applied for Twitter-like app

#ifndef PUBSUB_H
#define PUBSUB_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Publisher
{
private:
	vector < class AObserver * > subscribers; 
public:
	string name;
	Publisher(const string name);
	void attach(AObserver *sub);
	int says(const string speech);
	int geTotalFollowers(void) const;
	vector < class AObserver * > getFollowers(void) const;
};

class AObserver {
public:
	string name;
	AObserver(const string name);
	void follow(Publisher *pub);
	virtual void hears(const string speech)=0;
};

class Subscriber : public AObserver {
public:
	Subscriber(string name) : AObserver(name) {}
	//Subscriber(const Subscriber &other) : AObserver(other->name) {}
	void hears(const string speech);
};

#endif
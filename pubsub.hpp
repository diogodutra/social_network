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
	Publisher(string name);
	void attach(AObserver *sub);
	int says(string speech);
	int geTotalFollowers();
};

class AObserver {
public:
	string name;
	AObserver(string name);
	void follow(Publisher *pub);
	virtual void hears(string speech)=0;
};

class Subscriber : public AObserver {
public:
	Subscriber(string name) : AObserver(name) {}
	void hears(string speech);
};

#endif
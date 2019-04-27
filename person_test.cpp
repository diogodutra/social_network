#include "person_test.hpp"

Person speaker("Lecturer"), listener1("He"), listener2("She");

bool testInstantiation()
{	
	bool error = false;
	
	if (0==speaker.getTotalPopulation())
		error = true;
	
	return error;
}

bool testFollow()
{
	bool error = false;
	
	if (0!=speaker.geTotalFollowers())
		error = true;
	
	listener1.follow(&speaker);
	speaker.says("Hi");
	cout << '\n';
	if (1!=speaker.geTotalFollowers())
		error = true;
	
	listener2.follow(&speaker);
	speaker.says("Hey");
	cout << '\n';
	if (2!=speaker.geTotalFollowers())
		error = true;
	
	
	listener1.says("Hello");
	cout << '\n';
	if (0!=listener1.geTotalFollowers())
		error = true;
	
	return error;
}

bool testAll()
{
	bool error = false;
	
	error |= testInstantiation();
	error |= testFollow();
	
	return error;
}
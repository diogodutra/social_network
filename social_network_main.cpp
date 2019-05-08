//Observer Design Pattern applied to a Twitter-like app

#include <iostream>
#include <string>
//#include "person_test.hpp"
#include "social_network.hpp"

using namespace std;

int main()
{	
	SocialNetwork sn;
	
	sn.addPerson("Adam");
	sn.addPerson("Eve");
	
	//sn.persons[0].follow(&sn.persons[1]);
	//sn.persons[sn.findPersonId("Eva")].follow(&sn.persons[sn.findPersonId("Adam")]);
	sn.personNamed("Eve")->follow(sn.personNamed("Adam"));
	
	sn.printPopulation();
	
	sn.personNamed("Adam")->says("Hi");
	sn.personNamed("Eve")->says("Hey"); //bug: "segmentation fault" when "Eva"
}
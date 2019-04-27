//Observer Design Pattern applied to a Twitter-like app

#include <iostream>
#include <string>
#include "person_test.hpp"

using namespace std;

int main()
{
	bool error = testAll();
	
	cout << "Error = " << std::boolalpha << error << endl;
}
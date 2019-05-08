#include "social_network.hpp"

int SocialNetwork::getPopulationSize(void) const
{
	return this->persons.size();
}

int SocialNetwork::addPerson(const string name)
{
	const int newPersonId = this->getPopulationSize();
	
	Person newPerson(name);
	
	this->persons.push_back(newPerson);
	
	return newPersonId;
}

int SocialNetwork::findPersonId(const string name) const
{
	int id_result;
	
	for (int id = 0; id < this->getPopulationSize(); id++)
	{		
		if (!(0 != name.compare(this->persons[id].getName())))
		{
			id_result = id;
			break;
		}
	}
	
	return id_result;	
}

Person * SocialNetwork::personNamed(const string name)
{
	int id = findPersonId(name);
	
	return &this->persons[id];
}

bool SocialNetwork::printPerson(const int id) const
{
	bool error = false;
	
	const bool is_valid_id = ((0 < id) || (this->getPopulationSize() > id));
	
	if (is_valid_id)
	{
		cout << "Id # " << id << " ; ";
		this->persons[id].print();
	}
	else
	{
		error = true;
	}
	
	return error;
}

void SocialNetwork::printPopulation(void) const
{
	cout << "Population: " << this->getPopulationSize() << endl;
	
	for (int id = 0; id < this->getPopulationSize(); id++)
	{
		this->printPerson(id);		
	
		cout << endl;
	}
}
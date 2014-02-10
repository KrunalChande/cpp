#include "Gchar.h"

using namespace std;

Gchar::Gchar(string n, int cap)
{
	name = n;
	capacity = cap;
	used = 0;;
	toolHolder= new string [cap];
}

Gchar::Gchar(const Gchar& source)
{
	cout<<"copy constructer called. " <<endl;

	this->name = source.name;
	this->capacity = source.capacity;
	used = source.used;
	toolHolder = new string[source.capacity];

	copy(source.toolHolder, source.toolHolder + used, toolHolder);

	for(int i = 0;i<used;i++)
	{
		toolHolder[i] = source.toolHolder[i];
	}

}

Gchar& Gchar::operator=(const Gchar& source)
{
	cout<<"overloaded assignment called "<<endl;

	//check for self assignment
	//gc1 = gc1

	if(this==&source)
	{
		return *this;
	}

	this->name = source.name;
	this->capacity = source.capacity;
	used = source.used;

	copy(source.toolHolder, source.toolHolder + used, toolHolder);

}

Gchar::~Gchar()
{
	cout<<"destructor called for "<<this->name<<" @ this location "<<this<<endl;

	delete[] toolHolder;
}

void Gchar::insert(const string& toolName)
{
	if(used == capacity)
	{
		cout<<"toolholder is full. Cannot add additional tools"<<endl;
	}
	else
	{
		toolHolder[used]= toolName;
		used++;
	}

}

std::ostream& operator<<(std::ostream& os, const Gchar& gc)
{
	os<<"Game Char "<<gc.name<< "\n has the following tools:"<<std::endl<<"|";

	for(int i = 0; i<gc.used; i++)
	{
		os<<gc.toolHolder[i]+ "|";
	}
	return os<<std::endl;
}

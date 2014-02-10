#include"contact.h"

using namespace std;

contact::contact(string n):name(n), next(NULL)
{}

ostream& operator<<(ostream& os, const contact& c)
{
	return os<<"name: "<<c.name;
}


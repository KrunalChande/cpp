#include<iostream>
#include "vpet.h"
using namespace std;

int main()
{
	vpet bob(150,false);
	bob.feedpet(25);

	vpet sam;
	sam.feedpet(10);

	cout<<"bob weighs: "<<bob.getweight()<<endl;
	cout<<"sam "<<sam.getweight()<<endl;

	if(bob.gethungry())
	{
		cout<<"bob is hungry"<<endl;
	}
	else cout<<"bob is not"<<endl;
	return 0;
}

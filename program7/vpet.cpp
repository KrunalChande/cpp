//#include<iostream>
#include "vpet.h"

vpet::vpet(int w, bool hun): weight(w), hungry(hun)
{

}

vpet::vpet():weight(100),hungry(true)
{}

void vpet::feedpet(int amt)
{
	if(amt>= 0.5*weight)
	{
		hungry=false;
	}
	else
	{
		hungry=true;
	}

	weight = weight +0.25*amt;
}

double vpet::getweight()
{return weight;
}

bool vpet::gethungry()
{
	return hungry;
}

#include<iostream>
using namespace std;

int addition (int a, int b)
{
	cout<<"in addition"<<endl;

	return a+b;
}

int subtraction(int a, int b)
{
	cout<<"in subtraction"<<endl;
	return a-b;
}

int operation(int x, int y, int (*functocall)(int,int))
{
	int g;
	g = (*functocall)(x,y);
	return g;
}


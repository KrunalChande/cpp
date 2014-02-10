#include<iostream>
#include"pointer1.h"
using namespace std;

int main()
{
	int m,n;
	int (*minus)(int, int) = subtraction;
	cout<<"int defined";
	m = operation(7,5,addition);
	cout<<"after addition"<<endl;
	n = operation(20,m,minus);
	cout<<"after subtraction"<<endl;
	cout<<n;
	return 0;
}

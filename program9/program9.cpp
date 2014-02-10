#include<iostream>
#include<array>
using namespace std;

int main()
{
	array <double, 5> rainfall;

	rainfall[0]=2.3;
	rainfall[1]=0.3;
	rainfall[2]=0.0;
	rainfall[3]=3.1;
	rainfall[4]=0.5;

	cout<<rainfall.at(2)<<endl;
}

#include<iostream>
using namespace std;

double average(int array[], int size)
{
	double sum = 0.0;

	for(int i=0; i<size;i++)
	{
		sum = sum+array[i];
	}
	return (sum/size);
}

int main()
{
	int points[]={12,13,14,53,2};
	cout<<average(points,5)<<endl;
}

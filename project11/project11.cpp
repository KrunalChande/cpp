#include<iostream>
using namespace std;

int linearSearch(int array[], int size, int searchValue)
{
	for(int i=0; i<size;i++)
	{
		cout<<i<<"|";
		if(searchValue==array[i])
			{
			return i;
			}
	}
	return -1;
}

int main()
{
	int a[] = {12,34,5,75,13,6};

	int userValue;

	cout<<"enter an int"<<endl;

	cin>>userValue;

	int result = linearSearch(a,6,userValue);

	if(result>=0) cout<<"the number "<<a[result]<<"was found at the element was found at the element with index "<<result<<endl;
	else cout<<"the number is not found"<<endl;
}

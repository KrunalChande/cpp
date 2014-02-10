#include <iostream>

using namespace std;

int linearSearch(int array[], int size, int searchValue)
{
	int count =0;
	for(int i=0; i<size;i++)
	{
		if(searchValue==array[i])
			{
			break;
			}
		count ++;
	}
	cout<<"linear Search comparisons:"<<count<<endl;
}

int binarySearch(int array[],int size, int searchValue)
{
	int low = 0;
	int high = size - 1;
	int count =0;
	int mid;
	while(low<=high)
	{
		count ++;
	mid = (low+high)/2;

	if(searchValue == array[mid])
	{
		return mid;
	}
	else if (searchValue>array[mid])
	{low = mid + 1;
	}

	else {
		high = mid - 1;
	}
	}


	}



int main()
{

}

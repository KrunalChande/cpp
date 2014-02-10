#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue<int> myQ;

	for(int i=0;i<10;i++)
	{
		cout<<"enqueuing "<<i<<endl;
		myQ.push(i);
	}

	cout<<"size of queue "<<myQ.size()<<endl;
	cout<<"back "<<myQ.back()<<endl;

	while(!myQ.empty())
	{
		cout<<"deq "<<myQ.front()<<endl;
		myQ.pop();
	}
}

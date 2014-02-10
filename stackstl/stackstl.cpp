#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<int> myStack;
	myStack.push(5);
	myStack.push(3);
	myStack.push(2);
	myStack.push(1);

	cout<<"no of ints "<<myStack.size()<<endl;

	while(!myStack.empty())
	{
	cout<<"popping"<<myStack.top()<<endl;
	myStack.pop();
}
	cout<<"no of ints "<<myStack.size()<<endl;
}

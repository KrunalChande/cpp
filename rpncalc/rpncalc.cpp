#include<iostream>
#include<stack>
#include<string>
#include<sstream>

using namespace std;

bool isOperator(const string& input);
void performOp(const string& input, stack<double>& calcStack);

int main()
{
	cout<<"welcome to the rpn calc"<<endl;

	stack<double> calcStack;
	string input;
	while(true)
	{
		cin>>input;
		double num;
		if(istringstream(input)>>num)
		{
			calcStack.push(num);
		}
		else if(isOperator(input))
		{
			performOp(input, calcStack);
		}

		else if(input=="q")
		{
			return 0;
		}
		else cout<<"invalid in "<<endl;
	}
}

bool isOperator(const string& input)
{
	string ops[]={"-","+","*","/"};

	for(int i=0;i<4;i++)
	{
		if(input==ops[i]) return true;
	}
}

void performOp(const string& input, stack<double>& calcStack)
{
	double lval, rval, result;

	rval = calcStack.top();

	calcStack.pop();

	lval = calcStack.top();

	calcStack.pop();

	if(input=="-")
	{
		result = lval-rval;
	}
	else if (input=="+")
	{
		result = lval+rval;
	}
	else if (input=="*")
		{
			result = lval*rval;
		}
	else if (input=="/")
		{
			result = lval/rval;
		}
	cout<<result<<endl;
	calcStack.push(result);

}

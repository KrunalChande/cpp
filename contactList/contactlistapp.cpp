#include"contactlist.h"
using namespace std;

int main()
{
	contactlist* cl1 = new contactlist();

	string name;

	while(true)
	{
		cout<<"enter the name of contact or q to quit"<<endl;
		cin>>name;
		if(name=="q") break;
		cl1->insert(name);
	}
	cl1->printlist();

	while(true)
		{
			cout<<"enter the name of contact to delete or q to quit"<<endl;
			cin>>name;
			if(name=="q") break;
			cl1->deleteNode(name);
			cl1->printlist();

		}

}

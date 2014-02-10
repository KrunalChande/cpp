#include<iostream>
#include<cstdlib>
#include"hash.h"
#include <string>
using namespace std;

void hash::PrintItemsInIndex(int index)
{
	item *Ptr = HashTable[index];

	if(Ptr->name == "empty")
	{
		cout<<"index = "<<index <<endl;
	}
	else
	{
		cout<<"index "<<index<< "contains the following item \n";

		while(Ptr!=NULL)
		{
			cout<<"-----------\n";
			cout<<Ptr->name<<endl;
			cout<<Ptr->drink<<endl;
			cout<<"-----------\n";
			Ptr = Ptr->next;
		}
	}

}


hash::hash()
{
	for (int i = 0; i<tableSize; i++)
	{
		HashTable[i]=new item;
		HashTable[i]->name = "empty";
		HashTable[i]->drink = "empty";
		HashTable[i]->next = NULL;
	}
}

void hash::AddItem(string name, string drink)
{
	int index = Hash(name);
	if(HashTable[index]->name =="empty")
	{
		HashTable[index]->name = name;
		HashTable[index]->drink = drink;
	}
	else
	{
		item* Ptr = HashTable[index];
		item* n = new item;
		n->name = name;
		n->drink = name;
		n->next = NULL;
		while(Ptr->next !=NULL)
		{
			Ptr = Ptr->next;
		}
		Ptr->next = n;
	}
}

void hash::PrintTable()
{
	int number;
	for(int i = 0;i<tableSize;i++)
	{
		number = NumnberOftemsInIndex(i);
		cout<<"--------------\n";
		cout<<"index = "<<i<<endl;
		cout<<HashTable[i]->name<<endl;
		cout<<HashTable[i]->drink <<endl;
		cout<<"# of items = "<<number<<endl;
		cout<<"--------------\n";
	}
}

int hash::NumnberOftemsInIndex(int index)
{
	int count = 0;
	if(HashTable[index]-> name == "empty") return count;
	else
	{
		count++;
		item* Ptr = HashTable[index];

		while(Ptr->next != NULL)
		{
			count++;
			Ptr=Ptr->next;
		}
	}

}

int hash::Hash(string key)
{
int hash = 0;
int index;

//index = key.length();

for(int i = 0; i<key.length(); i++)
{
	hash = hash + (int)key[i];
	cout<<"hash is "<<hash<<" ";
}

index = hash % tableSize;
return index;
}

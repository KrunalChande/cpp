//============================================================================
// Name        : LinkedList_self.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LinkedList_header.h"
using namespace std;

// Add element at head
struct list_node* addElementHead(list_node* header, int data )
{
	cout<<"this is addElementHead"<<endl;
	list_node* element = new list_node;
	element->ptr = header;
	element->data = data;


	return element;
}


// Add element at the tail
void addElementTail(list_node* header, int data)
{
	cout<<"this is addElementHead"<<endl;

	list_node* curr = header;

	while(curr->ptr!=NULL)
	{
		curr = curr->ptr;
	}
	list_node* temp = new list_node();
	temp->data = data;
	curr->ptr = temp;
	temp->ptr = NULL;
}

// Delete element
void deleteElement(list_node* header, int data)
{
	cout<<"this is deleteElement"<<endl;
	list_node* curr;
	list_node* temp;
	curr = header->ptr;
	temp = header;
	while(curr!=NULL)
	{
		if(curr->data == data)
		{
			temp->ptr = curr->ptr;
			delete curr;
			curr = temp;
		}
		temp = curr;
		curr = curr->ptr;
	}

}

// Search
void searchElement(list_node* header, int data)
{
	cout<<"this is searchElement"<<endl;
	list_node* curr;
	curr = header;
	int i = 0;
	while(curr!=NULL)
	{
		if(curr->data == data)
		{
			i += 1;
		}
		curr = curr->ptr;
	}

	if(i == 0)
		cout<<"element does not exist"<<endl;
	else
		cout<<"element exists "<<i<<" times"<<endl;

}
// Sort
void sortList(list_node* header)
{
	cout<<"this is sortlist"<<endl;


}

// printList
void printList(list_node* header)
{
	cout<<"this is printList"<<endl;
	list_node* curr = header;

	while(curr!=NULL)
	{
		cout<<curr->data<<endl;
		curr = curr->ptr;
	}

}

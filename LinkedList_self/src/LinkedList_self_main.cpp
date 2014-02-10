#include<iostream>
#include "linkedList_header.h"
using namespace std;


int main(int argc, char* argv[])
{
	struct list_node* newNode = new list_node;
	struct list_node* head;
	newNode->data = 10;
	newNode->ptr = NULL;
	head = newNode;
	cout<<"\t\t\t\t\t\t\t\t"<<head<<endl;
	printList(head);

	head = addElementHead(head, 15);
	head = addElementHead(head, 1);
	head = addElementHead(head, 5);
	head = addElementHead(head, 13);
	head = addElementHead(head, 19);
	head = addElementHead(head, 16);
	cout<<"\t\t\t\t\t\t\t\t"<<head<<endl;
	addElementTail(head, 12);
	cout<<"\t\t\t\t\t\t\t\t"<<head<<endl;

	printList(head);
	cout<<"\t\t\t\t\t\t\t\t"<<head<<endl;

	//TODO:sortList(head);

	searchElement(head, 1);
	cout<<"\t\t\t\t\t\t\t\t"<<head<<endl;

	deleteElement(head, 5);
	cout<<"\t\t\t\t\t\t\t\t"<<head<<endl;

	printList(head);
	cout<<"\t\t\t\t\t\t\t\t"<<head<<endl;




	cout<<"Hey this worked"<<endl;
	return 0;
}

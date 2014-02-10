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
	printList(head);

	head = addElementHead(head, 15);
	head = addElementHead(head, 1);
	head = addElementHead(head, 5);
	head = addElementHead(head, 13);
	head = addElementHead(head, 19);
	head = addElementHead(head, 16);
	addElementTail(head, 12);


	printList(head);

	//TODO:sortList(head);

	searchElement(head, 1);

	deleteElement(head, 5);

	printList(head);




	cout<<"Hey this worked"<<endl;
	return 0;
}

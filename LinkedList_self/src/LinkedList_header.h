/*
 * LinkedList_header.h
 *
 *  Created on: Feb 9, 2014
 *      Author: Krunal
 */

#ifndef LINKEDLIST_HEADER_H_
#define LINKEDLIST_HEADER_H_

// Linked list struct
struct list_node{
	int data;
	struct list_node* ptr;
};

// Add element at head
struct list_node* addElementHead(list_node*, int);

// Add element at tail
void addElementTail(list_node*, int );

// Delete element
void deleteElement(list_node*, int);

// Search
void searchElement(list_node*, int);

// Sort
void sortList(list_node*);


// print element
void printList(list_node*);



#endif /* LINKEDLIST_HEADER_H_ */

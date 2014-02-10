/*
 * linkedlist_stanford.h
 *
 *  Created on: Feb 10, 2014
 *      Author: Krunal
 */

#ifndef LINKEDLIST_STANFORD_H_
#define LINKEDLIST_STANFORD_H_

struct node {
	int data;
	struct node* next;
};

struct node* BuildOneTwoThree() {
	struct node* head = new node;
	struct node* second = new node;
	struct node* third = new node;

	head->data = 1; // setup first node
	head->next = second; // note: pointer assignment rule
	second->data = 2; // setup second node
	second->next = third;
	third->data = 3; // setup third link
	third->next = NULL;
	// At this point, the linked list referenced by "head"
	// matches the list in the drawing.
	return head;
}

int Length(struct node* head) {
	struct node* current = head;
	int count = 0;
	while (current != NULL) {
		count++;
		current = current->next;
	}
	return count;
}

void LinkTest() {
	struct node* head = BuildOneTwoThree(); // suppose this builds the {2, 3} list
	struct node* newNode;
	newNode= new node;; // allocate
	newNode->data = 1;
	newNode->next = head; // link next
	head = newNode; // link head
	// now head points to the list {1, 2, 3}
}

/*
 Push() in C++ -- we just add a '&' to the right hand
 side of the head parameter type, and the compiler makes
 that parameter work by reference. So this code changes
 the caller's memory, but no extra uses of '*' are necessary --
 we just access "head" directly, and the compiler makes that
 change reference back to the caller.
*/
void Push(struct node*& head, int data) {
struct node* newNode = new node;;
newNode->data = data;
newNode->next = head; // No extra use of * necessary on head -- the compiler
head = newNode; // just takes care of it behind the scenes.
}
void PushTest() {
struct node* head = BuildOneTwoThree();// suppose this returns the list {2, 3}
Push(head, 1); // No extra use & necessary -- the compiler takes
Push(head, 13); // care of it here too. Head is being changed by
// these calls.
// head is now the list {13, 1, 2, 3}
}

struct node* AddAtHead() {
	struct node* head = NULL;
	int i;
	for (i=1; i<6; i++) {
		Push(&head, i);
	}
	// head == {5, 4, 3, 2, 1};
	return(head);
}

struct node* BuildWithSpecialCase() {
	struct node* head = NULL;
	struct node* tail;
	int i;
	// Deal with the head node here, and set the tail pointer
	Push(&head, 1);
	tail = head;
	// Do all the other nodes using 'tail'
	for (i=2; i<6; i++) {
		Push(&(tail->next), i); // add node at tail->next
		tail = tail->next; // advance tail to point to last node
	}
	return(head); // head == {1, 2, 3, 4, 5};
}

struct node* BuildWithDummyNode() {
	struct node dummy; // Dummy node is temporarily the first node
	struct node* tail = &dummy; // Start the tail at the dummy.
	// Build the list on dummy.next (aka tail->next)
	int i;
	dummy.next = NULL;
	for (i=1; i<6; i++) {
		Push(&(tail->next), i);
		tail = tail->next;
	}
	// The real result list is now in dummy.next
	// dummy.next == {1, 2, 3, 4, 5};
	return(dummy.next);
}

struct node* BuildWithLocalRef() {
	struct node* head = NULL;
	struct node** lastPtrRef= &head; // Start out pointing to the head pointer
	int i;
	for (i=1; i<6; i++) {
		Push(lastPtrRef, i); // Add node at the last pointer in the list
		lastPtrRef= &((*lastPtrRef)->next); // Advance to point to the
		// new last pointer
	}
	// head == {1, 2, 3, 4, 5};
	return(head);
}

void AppendNode(struct node** headRef, int num) {
	struct node* current = *headRef;
	// special case for the empty list
	if (current == NULL) {
		Push(headRef, num);
	} else {
		// Locate the last node
		while (current->next != NULL) {
			current = current->next;
		}
		// Build the node after the last node
		Push(&(current->next), num);
	}
}

#endif /* LINKEDLIST_STANFORD_H_ */

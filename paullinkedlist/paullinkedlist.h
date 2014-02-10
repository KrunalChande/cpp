/*
 * paullinkedlist.h
 *
 *  Created on: Jan 25, 2014
 *      Author: Krunal
 */

#ifndef PAULLINKEDLIST_H_
#define PAULLINKEDLIST_H_

class List
{
private:
	typedef struct node{
		int data;
		node* next;
	}* nodePtr;


	nodePtr head;
	nodePtr curr;
	nodePtr temp;
public:
	List();
	void AddNode(int addData);
	void DeleteNode(int delData);
	void PrintList();
};



#endif /* PAULLINKEDLIST_H_ */

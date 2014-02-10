/*
 * contactlist.h
 *
 *  Created on: Jan 18, 2014
 *      Author: Krunal
 */

#ifndef CONTACTLIST_H_
#define CONTACTLIST_H_
#include"contact.h"

class contactlist
{
public:
	contactlist();
	void addToHead(const std::string&);
	void printlist();
	void insert(const std::string&);
	void deleteNode(const std::string&);

private:
	contact* head;
	int size;
};




#endif /* CONTACTLIST_H_ */

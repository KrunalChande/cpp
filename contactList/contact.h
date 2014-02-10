/*
 * contact.h
 *
 *  Created on: Jan 18, 2014
 *      Author: Krunal
 */

#ifndef CONTACT_H_
#define CONTACT_H_

#include<iostream>
#include<string>
class contact
{
	friend std::ostream& operator<<(std::ostream& os, const contact& c);
	friend class contactlist;
public:
	contact(std::string name ="non");

private:
	std::string name;
	contact* next;

};



#endif /* CONTACT_H_ */

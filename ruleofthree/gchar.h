/*
 * gchar.h
 *
 *  Created on: Jan 18, 2014
 *      Author: Krunal
 */

#ifndef GCHAR_H_
#define GCHAR_H_

#include<iostream>
#include<string>

class Gchar
{
	friend std::ostream& operator<<(std::ostream& os, const Gchar& gc);
public:
	static const int DEFAULT_CAPACITY =5;

	Gchar(std::string name ="John", int capacity = DEFAULT_CAPACITY);

	Gchar(const Gchar& source);

	Gchar& operator=(const Gchar& source);

	~Gchar();

	void insert(const std::string& toolName);

private:
	std::string name;
	int capacity;
	int used;
	std::string* toolHolder;

};



#endif /* GCHAR_H_ */

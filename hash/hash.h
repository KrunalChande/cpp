/*
 * hash.h
 *
 *  Created on: Jan 26, 2014
 *      Author: Krunal
 */

#include<iostream>
#include<cstdlib>
#include <string>
using namespace std;


#ifndef HASH_H_
#define HASH_H_

class hash{

private:
	static const int tableSize = 10;
	struct item{
		std::string name;
		std::string drink;
		item* next;
	};

item* HashTable[tableSize];

public:
	hash();
	int Hash(string key);
	void AddItem(string name, string drink);
	int NumnberOftemsInIndex(int index);
	void PrintTable();
	void PrintItemsInIndex(int index);
};
#endif /* HASH_H_ */

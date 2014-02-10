/*
 * vpet.h
 *
 *  Created on: Jan 17, 2014
 *      Author: Krunal
 */
#include<iostream>
#ifndef VPET_H_
#define VPET_H_


class vpet
{
	public:

	friend std::ostream& operator<<(std::ostream&, const vpet&);
		vpet(int, bool);
		vpet();

		void feedpet(int amount);
		bool gethungry();
		double getweight();

	private:
		double weight;
		bool hungry;

};




#endif /* VPET_H_ */

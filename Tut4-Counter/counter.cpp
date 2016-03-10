#include <iostream>
#include "counter.h"
#include <string>

using namespace std;

SpecialCounter::SpecialCounter() //Default Constructor
{
	startcount = 0;
	stopcount = 255;
}

SpecialCounter::SpecialCounter(int instart, int instop) //Overloading constructor with specified inputs
{                                                      //May not be needed depending on methods used
	startcount = instart;
	stopcount = instop;	
}

SpecialCounter::~SpecialCounter()
{
	//Default empty destructor
}

int SpecialCounter::start(int starter) //Method to start counting
{
	startcount = starter;
	return startcount;
}

int SpecialCounter::stop(int stopper)
{
	stopcount = stopper;
	return stopcount;
}

int SpecialCounter::stepInc(int stepSize)
{
	startcount = startcount + stepSize;
	return startcount;
}

int SpecialCounter::stepDec(int stepSize)
{
	stopcount = stopcount - stepSize;
	return stopcount;
}

SpecialCounter SpecialCounter::operator++() //prefix method for counting up--value is incremented THEN used
{
	startcount += 1;
	return *this;
}

SpecialCounter SpecialCounter::operator--() //prefix method for counting down--value is decremented THEN used
{
	stopcount -= 1;
	return *this;
}

SpecialCounter SpecialCounter::operator++(int) //Postfix method for counting up: value is used THEN incremented
{
	SpecialCounter duplicate(*this); //create a duplicated copy of the variable using the *this pointer
	startcount += 1;
	return duplicate;
} 

SpecialCounter SpecialCounter::operator--(int)
{
	SpecialCounter duplicate(*this);
	stopcount -= 1;
	return duplicate;
}

int SpecialCounter::showUPCount()  //Show updated values when upcounting
{
	return startcount;
}

int SpecialCounter::showDownCount() //Show updated values when down counting
{
	return stopcount;
}

//Added in this method to show the current value of the counter depending on increment / decrement

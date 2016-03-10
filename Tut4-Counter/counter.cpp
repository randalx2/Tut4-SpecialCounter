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
{
	startcount = instart;
	stopcount = instop;	
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

int SpecialCounter::stepInc(int stepup)
{
	startcount = startcount + stepup;
}

int SpecialCounter::stepDec(int stepdown)
{
	stopcount = stopcount - stepdown;
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

SpecialCounter SpecialCounter::operator++(int)
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
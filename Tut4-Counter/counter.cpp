#include <iostream>
#include "counter.h"
#include <string>

using namespace std;

SpecialCounter::SpecialCounter() //Default Constructor
{
	startcount = 0;
	stopcount = 255;
	inc = 1;
	dec = 1;
}

SpecialCounter::SpecialCounter(int instart, int instop, int userinc, int userdec) //Overloading constructor with specified inputs
{
	startcount = instart;
	stopcount = instop;
	inc = userinc;
	dec = userdec;
}

void SpecialCounter::start(int starter) //Method to start counting
{
	
}

void SpecialCounter::stop(int stopper)
{

}

int SpecialCounter::stepInc(int stepup)
{

}

int SpecialCounter::stepDec(int stepdown)
{

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
#pragma once
#ifndef COUNTER_H
#define COUNTER_H
#include<string>

using namespace std;

class SpecialCounter{
private: int start, stop, inc, dec;

public: SpecialCounter();  //Default Constructor
		~SpecialCounter();//Default Destructor
		SpecialCounter(int, int, int, int);  //Overloading Constructor to set attributes to user specs

		int start(int);  //start counter method
		int stop(int);   //stop counter method

		int stepInc(int);  //method for incrementing the counter
		int stepDec(int);  //method for decrementing the counter

		SpecialCounter operator++();      //Overloading prefix ++ ie ++x ==> value is incremented THEN used
		SpecialCounter operator--();      //Overloading prefix -- ie --x ==> value is decremented THEN used
		SpecialCounter operator++(int);  //Overloading postfix ++ ie x++ ==> value is used THEN incremented
		SpecialCounter operator--(int);  //Overloading the postfix -- ie x-- ==> value is used THEN decremented
};

#endif

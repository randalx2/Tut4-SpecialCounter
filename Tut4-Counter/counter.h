//PRANEEL MISTHRY 202515355 
//COMPUTER METHODS 3 Tut4-SpecialCounter
//11 MARCH 2016
/****************************************************************************************************************/
#pragma once
#ifndef COUNTER_H
#define COUNTER_H
#include<string>

using namespace std;

class SpecialCounter{
private: int startcount, stopcount; // , inc, dec;

public: SpecialCounter();  //Default Constructor
		~SpecialCounter();//Default Destructor
		SpecialCounter(int, int);  //Overloading Constructor to set attributes to user specs

		int start(int);  //start counter method at specified value
		int stop(int);   //stop counter method at specified value

		int stepInc(int);  //method for incrementing the counter by a specified step
		int stepDec(int);  //method for decrementing the counter by a specified step

		SpecialCounter operator++();      //Overloading prefix ++ ie ++x ==> value is incremented by 1 THEN used
		SpecialCounter operator--();      //Overloading prefix -- ie --x ==> value is decremented by 1 THEN used
		SpecialCounter operator++(int);  //Overloading postfix ++ ie x++ ==> value is used THEN incremented by 1
		SpecialCounter operator--(int);  //Overloading the postfix -- ie x-- ==> value is used THEN decremented by 1

		int showUPCount();  //Method used to access private updated startcount attribute
		int showDownCount(); //Method used to access private updated stopcount attribute
};

#endif

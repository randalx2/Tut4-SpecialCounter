//PRANEEL MISTHRY 202515355 
//COMPUTER METHODS 3 Tut4-SpecialCounter
//11 MARCH 2016
/****************************************************************************************************************/
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <ctime>

#include "counter.h"

using namespace std;

int main()
{
	int usrstart = 0;
	int usrend = 255;

	int usrStepUP = 0;  //user specified increment
	int usrStepDOWN = 0; //user specified decrement

	SpecialCounter Timer0 = SpecialCounter(); //Create counter object with default initial start and stop values

	//Demonstrating the use of the default counter values
	//Counting up
	cout << "Default Counter Counting UP..." << endl;

	for (int i = Timer0.showUPCount(); i < Timer0.showDownCount(); i++)
	{
		Timer0++;
		cout << Timer0.showUPCount() << endl;
	}

	Timer0.resetTimer();  //Reset the timer back to default values

	//Counting Down
	cout << "Default Counter Counting DOWN..." << endl;

	for (int i = Timer0.showDownCount(); i > Timer0.showUPCount(); i--)
	{
		Timer0--;
		cout << Timer0.showDownCount() << endl;
	}

	Timer0.resetTimer();

	//Demonstrating use of user input counter values for stop and start
	cout << endl;
	cout << "Please enter the start and stop values for your UP counter " << endl;
	cin >> usrstart >> usrend; //update the variables

	for (int i = Timer0.start(usrstart); i < Timer0.stop(usrend); i++)
	{
		Timer0++;
		cout << Timer0.showUPCount() << endl;
	}

	Timer0.resetTimer();

	//Demonstrating use of user input for Down Counter
	cout << "Please enter the start and stop values for your DOWN counter " << endl;
	cin >> usrstart >> usrend; //update the variables

	for (int i = Timer0.stop(usrstart); i >= Timer0.start(usrend); i--)
	{
		Timer0--;
		cout << Timer0.showDownCount() << endl;
	}

	Timer0.resetTimer();

	//Demonstrating the operator overloading methods

	cout << "Demonstrating prefixed operator overloading for UP Counting" << endl;
	cout << "Enter the start and stop values for Operator Overloading prefix UP Counter " << endl;
	cin >> usrstart >> usrend;

	for (int i = Timer0.start(usrstart); i < Timer0.stop(usrend); i++)
	{
		++Timer0;
		cout << Timer0.showUPCount() << endl; //NB VALUE IS INCREMENTED IMMEDIATELY THEN USED
	}

	Timer0.resetTimer();

	//Demonstrating the operator overloading methods

	cout << "Demonstrating prefixed operator overloading for DOWN Counting" << endl;
	cout << "Enter the start and stop values for Operator Overloading prefix DOWN Counter " << endl;
	cin >> usrstart >> usrend;

	for (int i = Timer0.stop(usrstart); i > Timer0.start(usrend); i--)
	{
		--Timer0;
		cout << Timer0.showDownCount() << endl; //NB VALUE IS DECREMENTED IMMEDIATELY THEN USED
	}

	Timer0.resetTimer();

     //NB Need to insert some error protection for counting over specified limits
	//Also insert some error checking

	//Demonstrating the use of user input increments

	cout << "Enter start and stop values for Custome UP Counter" << endl;
	cin >> usrstart >> usrend;
	cout << "Enter the increment value for your custom up counter " << endl;
	cin >> usrStepUP;

	for (int i = Timer0.start(usrstart); i < Timer0.stop(usrend); i++)
	{
		cout << Timer0.stepInc(usrStepUP) << endl; 
		if (Timer0.stepInc(usrStepUP) >= Timer0.stop(usrend))
			break;   //Stop counting if incremented value exceeds or is equal to the stop value of the timer
	}
	
	Timer0.resetTimer();

	system("PAUSE");
	return 0;
}
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

	for (int i = Timer0.showUPCount(); i <= Timer0.showDownCount(); i++)
	{
		cout << i << endl;
	}

	//Counting Down
	cout << "Default Counter Counting DOWN..." << endl;

	for (int i = Timer0.showDownCount(); i >= Timer0.showUPCount(); i--)
	{
		cout << i << endl;
	}

	//Demonstrating use of user input counter values for stop and start
	cout << endl;
	cout << "Please enter the start and stop values for your UP counter " << endl;
	cin >> usrstart >> usrend; //update the variables

	for (int i = Timer0.start(usrstart); i <= Timer0.stop(usrend); i++)
	{
		cout << i << endl;
	}

	//Demonstrating use of user input for Down Counter
	cout << "Please enter the start and stop values for your DOWN counter " << endl;
	cin >> usrstart >> usrend; //update the variables

	for (int i = Timer0.stop(usrstart); i >= Timer0.start(usrend); i--)
	{
		cout << i << endl;
	}

	//Demonstrating the use of user input increments
	cout << "Please Enter the start and stop values for your CUSTOM UP COUNTER " << endl;
	cin >> usrstart >> usrend;

	cout << "Please Enter the CUSTOM INCREMENT VALUE for your CUSTOM UP COUNTER " << endl;
	cin >> usrStepUP;

	
	
	system("PAUSE");
	return 0;
}
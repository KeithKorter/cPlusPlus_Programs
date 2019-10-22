// ****************************************************************************
// This is a program to find the difference between the sum of the 
// squares of the first one hundred natural numbers and the square of the sum.
//*****************************************************************************
// Written by: Keith Korter
// Date: 29 January 2012
// Sources: GD Iyer


#include <iostream>                 
#include <string> 
#include <cmath>
#include <iomanip>


using namespace std;                

int main ()
{
	char reply;
	double sumOne;
	double sumTwo;





	//Number settings
	cout << fixed << showpoint; 
	
	cout << setprecision (2);

	//Math
	sumOne = ((100 * (100 + 1)) * ((2 * 100) + 1)) / 6;
	sumTwo = (((100 * (100 + 1)) / 2)) * (((100 * (100 + 1)) / 2));

	
	//The sum of the squares of the first 100 natural numbers
	cout << "\n\nThe sum of the squares of the first 100 natural numbers is: \n";
 
	cout << sumOne;
	

	//The square of the sum of the first 100 natural numbers
	cout << "\n\nThe square of the sum of the first 100 natural numbers is: \n";
 
	cout << sumTwo;
	

	//The difference between the sum of the squares of the first 100 numbers and the square of the sum is
	cout << "\n\nThe difference between both sets : \n";

	cout << sumTwo - sumOne;
	
	// This section stops the program 'flashing' off the screen.
    cout << "\n\nPress q (or any other key) followed by 'Enter' to quit: ";
	"\n";

    cin >> reply;

	return 0;
}
// Written by: Keith Korter
// Date: 5 February 2012
// Sources: None


#include <iostream>                 
#include <string> 
#include <cmath>
#include <iomanip>

using namespace std; 

int main ()
{


	double kg;
	





		cout << "Please enter your weight in kilograms:" << endl;
		cin >> kg;
		cout << endl;
			
	double lbs = kg * 2.20;

		cout << fixed << showpoint; 
		cout << setprecision (2);
		cout << "You weight " << kg << " in kilograms and " << lbs << " in pounds" << endl;





	return 0;
}

// Written by: Keith Korter
// Date: 2 February 2012
// Sources: None


#include <iostream>                 
#include <string> 
#include <cmath>
#include <iomanip>

using namespace std; 

int main ()
{


	double box = 250;
	double sideline = 100;
	double premium = 50;
	double gen = 25;
	int boxSold = 5750;
	int sideSold = 28000;
	int premSold = 35750;
	int genSold = 18750;
	double total = (box * boxSold)
				 + (sideline * sideSold)
				 + (premium * premSold)
				 + (gen * genSold);


	cout << fixed << showpoint; 
	cout << setprecision (2);

		cout << "There were " << boxSold << " box tickets sold, at $" << box << endl;
		cout << "There were " << sideSold << " sideline tickets sold, at $" << sideline << endl;
		cout << "There were " << premSold << " premium tickets sold, at $" << premium << endl;
		cout << "There were " << genSold << " general tickets sold, at $" << gen << endl;
		cout << endl;
		cout << "Grand totaling in $" << total << endl;




	return 0;
}
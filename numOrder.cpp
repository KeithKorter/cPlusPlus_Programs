// This program Arranges Numbers in Order
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

	int num1; 
	int	num2; 
	int	num3; 
	int	larger;
	int	smaller; 
	int	middle;

	cout << "please input your fist number:" ;
		cin >> num1;
		cout << endl;
			cout << "please input your second number:" ;
		cin >> num2;
		cout << endl;
			cout << "please input your third number:" ;
		cin >> num3;
		cout << endl;


	if (num1 > num2)
	{
		if (num1 > num3)
		{		
			larger = num1;
			
				if (num2 > num3)
				{
					middle = num2;
					smaller = num3;

				}	
				else
					smaller = num2;
					middle = num3;

					
		}
		else
				larger = num3;
				middle = num1;
				smaller = num2;


	}			
			
	
	if (num2 > num1)
	{
		if (num2 > num3)
		{		larger = num2;
				
				if (num1 > num3)
				{
					middle = num1;
					smaller = num3;

				}
				else
					smaller = num1;
					middle = num3;
		}
	}				
				
	else 
				larger = num3;
				middle = num2;
				smaller = num1;
				

		cout << "the larger number is: " << larger << endl;
		cout << "The middle number is: " << middle << endl;
		cout << "The smaller number is: " << smaller << endl;




	return 0;


}
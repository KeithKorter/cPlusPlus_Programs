//********************************************
// Is the number a palindrome?
// 
// Written by: Keith Korter
// Date: 18 February 2012
// Sources: None
//********************************************


#include <iostream>   
#include <string> 
#include <cmath>
#include <iomanip>


using namespace std; 


int main ()
{
	int num;
	bool isNumPalindrome;
	

	cout << "Please enter a number to see if it is a palindrome: " << endl;
	cin >> num;
	cout << endl;

	
	
	return 0;
}

	bool isNumPalindrome (int num)
	{
		int pwr = 0;

		if (num < 10)
			return true;
		else
		{

			while (num / static_cast<int>(pow(10.0, pwr)) >= 10);
				pwr++;
			while (num >= 10)
			{
				int tenTopwr = static_cast<int>(pow(10.0, pwr));

				if ((num / tenTopwr) != (num % 10))
					return false;
				else
				{
					num = num % tenTopwr;
					num = num / 10;
					pwr = pwr - 2;
				}
			}//end while

			return true;
		}//end else
	
	}

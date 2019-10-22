//**************************************************************
// This is a program to allow the user to enter the desired sum 
// of dice rolled from programming excersize 7 in chapter 6
// Written by: Keith Korter
// Date: 18 February 2012
// Sources: None
//**************************************************************


#include <iostream>   
#include <cstdlib>
#include <ctime>


using namespace std; 

int rollDice (int num);
int want;
char choice;

int main ()
{
	cout << "Enter the desired sum of the numbers rolled: ";
	cin >> want;
	cout << endl;
	cout << "The number of times the dice are rolled to "
		<< "get the sum " << want << " = " << rollDice(want) << endl;



	return 0;
}

int rollDice (int num)
{
	int die1;
	int die2;
	int sum;
	int rollCount = 0;

	srand(time(0));

	do
	{
		die1 = rand() % 6 + 1;
		die2 = rand() % 6 + 1;
		sum = die1 + die2;
		rollCount++;
	}
	while (sum != num);

	return rollCount;
}

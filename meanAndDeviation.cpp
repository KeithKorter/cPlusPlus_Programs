//**********************************************
// This is a program to provide the mean and 
// standard deviation of five integers
// 
// Written by: Keith Korter
// Date: 18 February 2012
// Sources: None
//**********************************************


#include <iostream>                  
#include <cmath>

using namespace std; 

int main ()
{

	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	double mean;
	double dev;

	cout << "Please input 5 integers seperated by a space.:" << endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	cout << endl;

	mean = (num1 + num2 + num3 + num4 + num5)/5;

	cout << "The mean of the numbers is:" << mean << endl;

	dev = sqrt((pow((num1 - mean), 2) 
		+ pow((num2 - mean), 2) 
		+ pow((num3 - mean), 2) 
		+ pow((num4 - mean), 2) 
		+ pow((num5 - mean), 2)) / 5);

	cout << "The standard deviation of the numbers is:" << dev << endl;




	return 0;
}
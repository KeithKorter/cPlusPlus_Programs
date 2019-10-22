// This is a program to help you figure out the price per square inch of a pizza.
// Written by: Keith Korter
// Date: 22 Jan. 2012
// Sources: None

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main ()

{
	char reply;
	int radius;
	double area;
	double price;
	double pricePerSquareInch;


	cout<<"Enter the radius of the pizza: ";
	cin>>radius;

	area=3.14159*(radius*radius);

	
	cout<<"Enter the price of the pizza: ";
	cin>>price;


	pricePerSquareInch=price/area;
	cout<<"The price per square inch is: "<<pricePerSquareInch;
	cout<<"\n";
    // This section stops the program 'flashing' off the screen.
    cout << "Press q (or any other key) followed by 'Enter' to quit: ";
    cin >> reply;
    return 0;
}
// This is a program to determine if Males or Females score better on a particular test, 
// and to see if Community College or University students score better. 
// Written by: Keith Korter
// Date: 8 February 2012
// Sources: Keith Thrope for "inFile.open(sourceName.c_str());" 


#include <iostream>                 
#include <string> 
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std; 

int main ()
{
			//Declare variables to manipulate data
		char reply;
		string name;
		string school;
		string sourceName;
		char gender;
		double score;
		double sum = 0;
		int count = 0;
		int femCount = 0;
		int maleCount = 0;
		int unCount = 0;
		int ccCount = 0;
		double maleTotal = 0;
		double femTotal = 0;
		double ccTotal = 0;
		double unTotal = 0;
		double line;



			 //declares sourceName as an ifstream variable to read from
		ifstream inFile;


		cout << "Please enter the filename with the path on disk:" << endl;
		cin >> sourceName;
		cout << endl;

			//converts c++ data to c because the open command requires conversion from string data type to c data type
		 inFile.open(sourceName.c_str()); 





		if (!inFile)
		{
			cout << "Cannot open input file. "
				 << "Program terminates!" << endl;
			return 1;
		}

		cout << "The input file is read as:" << endl;

				//Display input file and do some math
		for (line = 1; line <= 12; line++)
		{

				inFile >> name;		//read the name
				inFile >> gender;	//read the gender
				inFile >> school;	//read the school
				inFile >> score;	//read the score

			cout << left << setw(12) <<  name
				 << right << setw(3) << gender 
				 << right << setw(3) << school
				 << right << setw(3) << score << endl;	

				//Figures the sum and average for all students
			sum = sum + score;
			count++;

				//Figures the sum and average for genders
			switch (gender)
			{
			case 'M':
				maleTotal = maleTotal + score;
				maleCount++;
				break;
			case 'F':
				femTotal = femTotal + score;
				femCount++;
				break;
			}
				//Figures the sum and average for school
			if (school == "CC")
			{			
				ccTotal = ccTotal + score;
				ccCount++;
			}
			if (school == "UN")
			{
				unTotal = unTotal + score;
				unCount++;
			}
		}	//end file read


		// This lets user pause for a moment and take in the glory that is this program.
	cout << endl;
	cout << endl;
    cout << "Press any key followed by 'Enter' to see averages: ";
	cout << endl;
    cin >> reply;



		// Displays the results
	cout << fixed << showpoint << setprecision (2);

		cout << endl;
		cout << left << setw(12) <<  "Male Average:"
			 << right << setw(20) << maleTotal / maleCount << endl;
		cout << left << setw(12) << "Female Average:"
			 << right << setw(18) << femTotal / femCount<< endl;
		cout << left << setw(12) << "Community College Average:"
			 << right << setw(7) << ccTotal / ccCount << endl;
		cout << left << setw(12) << "University Average:"
			 << right << setw(14) << unTotal / unCount << endl;
		cout << left << setw(12) << "Total Student Average:"
			 << right << setw(11) << sum / count << endl;



		

	// This section stops the program 'flashing' off the screen.
	cout << endl;
	cout << endl;
    cout << "Press any  key followed by 'Enter' to quit: ";
	cout << endl;
    cin >> reply;

	inFile.close();	//close the file.

	return 0;
}
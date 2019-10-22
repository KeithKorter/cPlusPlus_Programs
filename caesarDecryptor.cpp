// This is a program to automatically decrypt virtually any Caesar coded message. 
// Written by: Keith Korter
// Date: 8 February 2012
// Sources: None


#include <iostream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

//Prototypes suggested by G.D.
void initialize(int list[]);
void characterCount(char ch, int list[]);
void calcShift(int& shift, int list[]);
void writeOutput(ifstream &in, ofstream &out, int shift);

	//Main function
	int main()
	{
		int letterCount[26];
		char ch = 0;
		int shift = 0;


		ifstream inFile; 
		ofstream outFile;
		string inputFileName;
		string output;

		//User input
		cout << "This program is a Caesar Cipher made by Keith Korter" << endl;
		cout << "Please enter the location of the input file." << endl;
		getline(cin, inputFileName);

		cout<<"Please enter the location of the output file." << endl;
		getline(cin, output);

		inFile.open(inputFileName.c_str());
		outFile.open(output.c_str()); 
    
		// checks for the file location 
		if (!inFile)                                    
			{
				cout << "File location error." << endl;
				exit(0);
        
			}

		initialize(letterCount);            
		inFile.get(ch);       
		
		// fills an array with how many times a letter showes up
		while (inFile)                              
			{
				while (ch != '\n' && ch != ' ')      
				{
					characterCount(ch, letterCount);                   
					inFile.get(ch);     
				}                               
				inFile.get(ch);                            
			}

		// Finds the letter shift
		calcShift(shift, letterCount); 

		// Creates the output file
		writeOutput(inFile, outFile, shift); 

		outFile.close();
		inFile.close();
		return 0;
	}



	void initialize(int list[])
	{
		for (int j = 0; j < 26; j++)
        list[j] = 0;
	}

	//Count the number of times a letter shows up in the text
	void characterCount(char ch, int list[])
	{
		int index;
		ch = toupper(ch);                       
		index = int (ch) - int ('A');       
		if (0 <= index && index < 26)           
		list[index]++;
	}

	//Finds the most frequent character, 'e', and then shifts away from 'e'
	void calcShift(int& shift, int list[])
	{
		int highest = 0;
		for (int count = 0; count < 26; count++)
		{
			if (list[count] > list[highest])
				highest = count;
		}
		if(highest > 4)
			shift = highest - 4;
		else
			shift = 4 - highest;
	}

	//This is the coding to create the output file.
	void writeOutput(ifstream &in, ofstream &out, int shift) 
	{
		in.clear();
		in.seekg(0);
		char c = 0;
		int temp,numVal, back;
		while (!in.eof())
		{
			in.get(c);
			numVal=int(c);
			if(numVal >= 65 && numVal <= 90)
			{
				temp = (c - 65 - shift); 
				back = 65;
			}

			else if (numVal >= 97 && numVal <= 122)
			{
				temp = (c - 97 - shift);
				back = 97;
			}
			else
			{
				out<<c;
				continue;
			}
			if (temp < 0)
			{
				out<<char(temp + 26 + back);
			}
			else
			{
				out<<char(temp + back);
			}
		}
	}

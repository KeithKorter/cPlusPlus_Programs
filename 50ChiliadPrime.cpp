// This is a program to calculate and display the number of primes in the first 50 “chiliads”.
// Written by: Keith Korter
// Date: 25 February 2012
// Sources: None


#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
bool isPrime (long); // Returns true if n is a prime, else false

long primeCount (long x, long y); // Returns the number of primes between x and y, inclusive. 

 
int main()
{
	long count = 0;
	double totalCount = 0;

	//Header
	cout << "Start" << setw(11)<< "End" << setw(24)<< "Number of Primes" << endl;
 
	//Number brackets and spacing
	for(long i = 0; i <= 49; i++)
		{
			count = primeCount (1 + (i * 1000), (i + 1) * 1000);
			totalCount += count;
			cout << left << setw(13) <<  1 + i * 1000
				 << left << setw(11) << (i + 1) * 1000
				 << count <<endl;			
		}

	double avg = totalCount / 50;	
	cout << "\nTotal primes in the first 50 chiliads: " << totalCount << endl;
	cout << "Average number per chiliad: " << avg << endl;
 
 
return 0;
 
}
 
bool isPrime (long n) //If number is prime or not
{
	bool prime;
 
	prime = true;
 
	if(n % 2 == 0)
	prime = false;
 
	for(long i = 3; i < n && prime == true; i += 2)
		{
			if(n % i == 0)
			prime = false;
		}
		return prime;
 
}
 
long primeCount (long x, long y) //count number of primes.
{
	long count = 0;
 
	for(x; x < y; x++)
		{
			if(isPrime(x))
			count++;
		}
		return count;
}
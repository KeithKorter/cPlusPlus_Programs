// This is a program to program to calculate the correct fare , 
// based on an appropriate dialog with the customer for the Anacortes to Friday Harbor Ferry. 
// Written by: Keith Korter
// Date: 2 February 2012
// Sources: None


#include <iostream>                 
#include <string> 
#include <cmath>
#include <iomanip>

using namespace std;  

	//Named Constants
		//Passenger Fares (and Bicycle Surcharge)
    const double adult = 13.15;
	const double senior = 6.55;
	const double youth = 10.55; 
	const double bicycle = 4.00;

		//Vehicle & Driver Fares for vehicles under 20'
    const double vehcUnderTwenDriver = 51.20;
	const double vehcUnderTwenSenior = 44.60;
	const double overHeight = 51.20; 
	
		//Vehicle Length Based Fares (includes the driver)
    const double twenToThirUn = 76.80;
	const double twenToThirOver = 153.60;
	const double thirToFour = 204.80; 


int main ()
{

	char reply;

		//Variable declaration
	char carAns;
	char carAnsSen;
	int adultNum;
	int senNum;
	int youthNum;
	int bikeNum;
	char carHeight;
	int carLength;
	double totalFare;


		//Number settings
	cout << fixed << showpoint; 
	cout << setprecision (2);
	
 	// Greeting.
	cout << "Welcome to Keith Korter's Fare Calculator: " << endl;
	cout << endl;

	// Question sets
	cout << "Are you driving a vehicle onto the ferry? (y/n): ";
	cin >> carAns;
	cout << endl;

	switch (carAns)
	{

		case 'n':
		case 'N':

			cout << "How many adults (age 19 to 64): in your group? " << endl;
			cin >> adultNum;
			cout << endl;

			cout << "How many senior citizens (65 or older), or disabled persons in your group? " << endl;
			cin >> senNum;
			cout << endl;

			cout << "How many youth (5 to 18) in your group? " << endl;
			cin >> youthNum;
			cout << endl;

			cout << "How many people in your group are traveling with a bicycle? " << endl;
			cin >> bikeNum;
			cout << endl;

			totalFare = (youthNum * youth)
						+ (senNum * senior)
						+ (adultNum * adult)
						+ (bikeNum * bicycle);

			cout << endl;
			cout << "Your total fare is $" << totalFare << endl;
			cout << " Thank you for using Keith Korter's Fare Calculator" << endl;
			break;

		case 'y':
		case 'Y':
			cout << "Is the driver a senior citizen "
				 <<	"(65 or over) or disabled? (y/n): ";
			cin >> carAnsSen;
			cout << endl;
			cout << "How many passengers in your vehicle? (excluding the driver) " << endl;
			cout << endl;
			cout << "Adults: ";
			cin >> adultNum;
			cout << endl;

			cout << "Senior Citizens (65 or older): ";
			cin >> senNum;
			cout << endl;

			cout << "Youth (5 to 18 years old): ";
			cin >> youthNum;
			cout << endl;

			cout << "Is your vehicle over 7 feet, 6 inches in height? (y/n): ";
			cin >> carHeight;
			cout << endl;
			
			cout << "How long is your vehicle in feet?: ";
			cin >> carLength;
			cout << endl;


				//Answer Combinations

		if (carLength < 20)

				switch (carAnsSen)
				{
					 // Is not a senior
				case 'n':
				case 'N':

						switch (carHeight) 
						{
							//Is not a senior and car under 7'6"
						case 'n':
						case 'N':

							if (carLength < 20)			
							totalFare = vehcUnderTwenDriver
								+ (youthNum * youth)
								+ (senNum * senior)
								+ (adultNum * adult);

								cout << endl;
								cout << "Your total fare is $" << totalFare << endl;
								cout << "Thank you for using Keith Korter's Fare Calculator" << endl;
					
						return 0;
						break;
						
							  
							//Is not a senior and car is NOT under 7'6"
						case 'y':
						case 'Y':			
						if (carLength < 20)		
							totalFare = vehcUnderTwenDriver
								+ overHeight
								+ (youthNum * youth)
								+ (senNum * senior)
								+ (adultNum * adult);

								cout << endl;
								cout << "Your total fare is $" << totalFare << endl;
								cout << "Thank you for using Keith Korter's Fare Calculator" << endl;
						return 0;
						break;
						default:
			cout << "Invalad Answer" << endl;
						}
				break;

					//Is a senior
				case 'y':
				case 'Y':

						switch (carHeight)
						{
							//Is a senior and car under 7'6"
						case 'n':
						case 'N':

						if (carLength < 20)
			
						totalFare = vehcUnderTwenSenior
							+ (youthNum * youth)
							+ (senNum * senior)
							+ (adultNum * adult);

							cout << endl;
							cout << "Your total fare is $" << totalFare << endl;
							cout << "Thank you for using Keith Korter's Fare Calculator" << endl;

							return 0;
						break;
						

							//Is a senior and car is NOT under 7'6"
						case 'y': 
						case 'Y':
				
						if (carLength < 20)
			
						totalFare = vehcUnderTwenSenior
							+ overHeight
							+ (youthNum * youth)
							+ (senNum * senior)
							+ (adultNum * adult);

							cout << endl;
							cout << "Your total fare is $" << totalFare << endl;
							cout << "Thank you for using Keith Korter's Fare Calculator" << endl;
							return 0;
						break;
						default:
						cout << "Invalad Answer" << endl;
						}

				break;
				}
				
	
						
		else if (20 <= carLength  && (carLength < 30))
			// 20 to 30 under under 7'6"
					switch (carHeight)
					{
					case 'n':
					case 'N':

					
			
						totalFare = twenToThirUn
							+ (youthNum * youth)
							+ (senNum * senior)
							+ (adultNum * adult);

							cout << endl;
							cout << "Your total fare is $" << totalFare << endl;
							cout << "Thank you for using Keith Korter's Fare Calculator" << endl;
						return 0;

						break;

					case 'y':
					case 'Y':
						
						// 20 to 30 under over 7'6"
				
			
						totalFare = twenToThirOver
							+ (youthNum * youth)
							+ (senNum * senior)
							+ (adultNum * adult);

							cout << endl;
							cout << "Your total fare is $" << totalFare << endl;
							cout << "Thank you for using Keith Korter's Fare Calculator" << endl;
						
							return 0;
						break;
						

					}
				

					// 30 to 40 
		if (carLength >= 40)
		{
				if (carLength >= 40)
						cout << "Sorry, That vehicle is prohibited." << endl;
						cout << "Thank you for using Keith Korter's Fare Calculator" << endl;
						return 0;
						
		}
		
		else if (carLength >= 30)
			totalFare = thirToFour
					+ (youthNum * youth)
					+ (senNum * senior)
					+ (adultNum * adult);

						cout << endl;
						cout << "Your total fare is $" << totalFare << endl;
						cout << "Thank you for using Keith Korter's Fare Calculator" << endl;
						
						return 0;

				
		break;
		
		default:
			cout << "Invalad Answer" << endl;

			return 0;

	}//Final end switch

	// This section stops the program 'flashing' off the screen.
	cout << endl;
	cout << endl;
    cout << "Press q (or any other key) followed by 'Enter' to quit: ";
	cout << endl;
    cin >> reply;

	return 0;
}
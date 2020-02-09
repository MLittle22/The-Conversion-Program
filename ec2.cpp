#include<iostream>

using namespace std;

void displayMenu() {

	cout << "\t\tWelcome to the Conversion Program" << endl

		 << "\t\t=================================" << endl

		 << "1. Fahrenheit to Celsius" << endl

		 << "2. Miles to kilometers" << endl

		 << "3. Liters to Gallons" << endl

		 << "4. Exit from the program" << endl;

}

double fahrenheitToCelsuis(double fTemp) {

	fTemp = (fTemp - 32) * 5 / 9;

	return fTemp;

}

double milesToKilometers(double miles) {

	miles = miles * 1.60934;

	return miles;

}

double litersToGallons(double liters) {

	liters = liters * 0.264172;

	return liters;
}




int main() {

	double miles, fahrenheit, liters;

	int choice;

	do {

		displayMenu();

		cout << "\n\nEnter your choice: ";

		cin >> choice;

		switch (choice) {

		case 1:

		{

			cout << "Enter fahrenheit: ";

			cin >> fahrenheit;

			cout << "Celsius: " << fahrenheitToCelsuis(fahrenheit) << endl;

		}

		break;

		case 2:

		{

			cout << "Enter Miles: ";

			cin >> miles;

			cout << "Kilometers: " << milesToKilometers(miles) << endl;

		}

		break;

		case 3:

		{

			cout << "Enter Liters: ";

			cin >> liters;

			cout << "Gallons: " << litersToGallons(liters) << endl;

		}

		break;

		case 4:

			cout << "Exiting program..." << endl;

			break;

		}

	} while (choice != 4);


}





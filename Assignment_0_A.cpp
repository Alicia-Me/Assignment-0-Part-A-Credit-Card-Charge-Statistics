// Alicia Me
// CIS 17C
// Assignment 0, Part A

/*
Write a program that lets the user enter the total amount of money spent on a credit card for each of 12 months
into an array of doubles. The program should have the following functions:
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//====functions====
//A totalAmount function
double totAmt(double arr[], int length);
//An averageAmount function
double avgAmt(double arr[], int length);
//A largestMonth function --> out put largest value
double lMon(double arr[], int length);
//A smallestMonth function
double sMon(double arr[], int length);

int main() {

	//array
	//constant no need to change
	const int LENGTH = 12;

	double spendings[LENGTH];

	string months[LENGTH] = { "Janurary", "February", "March", "April",
							 "May", "June", "July", "August", "September",
							 "October", "November", "December"
	};

	cout << "Enter the total amount of spendings: " << endl;
	//loop to go thru array

	for (int i = 0; i < LENGTH; i++) {
		cout << months[i] << " :  $ ";
		cin >> spendings[i];
		//Input Validation: Do not accept negative numbers for monthly credit card charges. If the credit card charge for the month is negative, assume the value to be 0.

		if (spendings[i] < 0) {
			spendings[i] = 0;
		}

	}

	cout << "===============Data Displayed======================" << endl;

	//whats going to be displayed
	cout << "Here are the credit card totals for each month: " << endl;
	for (int i = 0; i < LENGTH; i++) {
		cout << months[i] << " :  $" << fixed << setprecision(2) << spendings[i] << endl;
	}


	//declare then i assign it
	double total, average, largest, smallest;

	total = totAmt(spendings, LENGTH);
	average = avgAmt(spendings, LENGTH);
	largest = lMon(spendings, LENGTH);
	smallest = sMon(spendings, LENGTH);


	cout << "The total amount of money spent was $" << fixed << setprecision(2) << total << endl;
	cout << "The average amount of money spent per month was $" << fixed << setprecision(2) << average << endl;
	cout << "The most amount of money spent in a month was $" << fixed << setprecision(2) << largest << endl;
	cout << "The least amount of money spent in a month was $" << fixed << setprecision(2) << smallest << endl;

	return 0;
}

//------Total amount

double totAmt(double arr[], int length) {
	double total = 0;
	for (int i = 0; i < length; i++) {
		total = total + arr[i];
	}
	return total;
}

//-----Average amount
//divide the sum by the length
double avgAmt(double arr[], int length) {
	return totAmt(arr, length) / length;
}


double lMon(double arr[], int length) {
	double largest = arr[0];
	for (int i = 1; i < length; i++) {
		if (arr[i] > largest) {
			largest = arr[i];
		}
	}

	return largest;
}

double sMon(double arr[], int length) {
	double smallest = arr[0];
	for (int i = 1; i < length; i++) {
		if (arr[i] < smallest) {
			smallest = arr[i];
		}
	}

	return smallest;
}

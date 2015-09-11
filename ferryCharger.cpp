// Assignment 3 for CS 161 Goble
// This program calculates the ferry fare based on dialoge with the customer.
// Author: Mia Armstrong
// Date: October 16,2011
// Sources: None
// Compiled with: Visual C++ 2008 Express Edition

#include <iostream>
#include <iomanip>		// needed for fixed and setprecision below.
#include <string>

using namespace std;

int main ()
{

	cout << fixed;            // Set the output stream to display floating point numbers..
                              // ... in fixed point notation rather than scientific notation.
    cout << setprecision(2);  // Set the output stream to display exactly 2 places of decimals...
                              // ... just like a U.S. currency is displayed
	// declare variables.
	char reply;
	int adults;
	int seniors;
	int youth;
	int bikes;
	int length;
	double total;
	// Handle user dialog
	cout << "Welcome to Mia Armstrong's Fare Calculator." << endl;
	cout << "Are you driving a vehicle onto the ferry? (y/n) ";
	cin >> reply;
		if (reply == 'n' || reply == 'N') {
			cout << "How many regular fare adults in your group? ";
			cin >> adults;
			cout << "How many senior citizens (age 65 or older), or disabled persons in your group?";
			cin >> seniors;
			cout << "How many youth (5- 18) in your group? ";
			cin >> youth;
			cout << "How many people in your group are traveling with a bicycle? ";
			cin >> bikes;
			total = adults * 13.15 + seniors * 6.55 + youth * 10.55 + bikes * 4.00;
			cout << "Your total fare is $" << total << "."<< endl;
			cout << "Thank you for using Mia Armstrong's Fare Calculator."<< endl;
			cout << "Enter q to quit: ";
			cin >> reply;
			exit(1);
		}
		else { 
			cout << "Is the dirver a senior citizen (65 or older) or disabled? (y/n) ";
			cin >> reply;
			if (reply == 'n' || reply == 'N') {
				cout << "How many passengers in your vehicle (excluding the driver)?" << endl;
				cout << "Adults: ";
				cin >> adults;
				cout << "Reduced Fare: Senior Citizens (65 or older), or Disabled Persons: ";
				cin >> seniors;
				cout << "Youth (5-18 years old): ";
				cin >> youth;
				cout << "Is your vehicle over 7 feet, 6 inches in height? (y/n) ";
				cin >> reply;
				if (reply == 'y' || reply == 'Y') {
					cout << "How long is your vehicle in feet? ";
					cin >> length;
					if (length < 20) {
						total = 102.40 + adults * 13.15 + seniors * 6.55 + youth * 10.55;
					}
					else if (length < 30) {
						total = 153.60 + adults * 13.15 + seniors * 6.55 + youth * 10.55;
					}
					else if (length < 40) {
						total = 204.80 + adults * 13.15 + seniors * 6.55 + youth * 10.55;
					}
					else {
						cout << "Vehicle is prohibited." << endl;
						cout << "Enter q to quit: ";
						cin >> reply;
						exit(1);
					}
					cout << "Your total fare is $"<< total <<"."<< endl;
					cout << "Thank you for using Mia Armstrong's Fare Calculator."<< endl;
				}
				else {
					cout << "How long is your vehicle in feet? ";
					cin >> length;
					if (length < 20) {
						total = 51.20 + adults * 13.15 + seniors * 6.55 + youth * 10.55;
					}
					else if (length < 30) {
						total = 76.80 + adults * 13.15 + seniors * 6.55 + youth * 10.55;
					}
					else if (length < 40) {
						total = 204.80 + adults * 13.15 + seniors * 6.55 + youth * 10.55;
					}
					else {
						cout << "Vehicle is prohibited." << endl;
						cout << "Enter q to quit: ";
						cin >> reply;
						exit(1);
					}
					cout << "Your total fare is $"<< total <<"."<< endl;
					cout << "Thank you for using Mia Armstrong's Fare Calculator."<< endl;
				}
			}
			else {
				cout << "How many passengers in your vehicle (excluding the driver)? " << endl;
				cout << "Adults: ";
				cin >> adults;
				cout << "Reduced Fare: Senior Citizens (65 or older), or Disabled Persons: ";
				cin >> seniors;
				cout << "Youth (5-18 years old): ";
				cin >> youth;
				cout << "Is your vehicle over 7 feet, 6 inches in height? (y/n) ";
				cin >> reply;
				if (reply == 'y' || reply == 'Y') {
					cout << "How long is your vehicle in feet? ";
					cin >> length;
					if (length < 20) {
						total = 95.80 + adults * 13.15 + seniors * 6.55 + youth * 10.55;
					}
					else if (length < 30) {
						total = 153.60 + adults * 13.15 + seniors * 6.55 + youth * 10.55;
					}
					else if (length < 40) {
						total = 204.80 + adults * 13.15 + seniors * 6.55 + youth * 10.55;
					}
					else {
						cout << "Vehicle is prohibited." << endl;
						cout << "Enter q to quit: ";
						cin >> reply;
						exit(1);
					}
					cout << "Your total fare is $"<< total <<"."<< endl;
					cout << "Thank you for using Mia Armstrong's Fare Calculator."<< endl;
				}
				else {
					cout << "How long is your vehicle in feet? ";
					cin >> length;
					if (length < 20) {
						total = 44.60 + adults * 13.15 + seniors * 6.55 + youth * 10.55;
					}
					else if (length < 30) {
						total = 76.80 + adults * 13.15 + seniors * 6.55 + youth * 10.55;
					}
					else if (length < 40) {
						total = 204.80 + adults * 13.15 + seniors * 6.55 + youth * 10.55;
					}
					else {
						cout << "Vehicle is prohibited." << endl;
						cout << "Enter q to quit: ";
						cin >> reply;
						exit(1);
					}
					cout << "Your total fare is $"<< total <<"."<< endl;
					cout << "Thank you for using Mia Armstrong's Fare Calculator."<< endl;
				}
			}
			}
				cout << "Enter q to quit: ";
				cin >> reply;
				return 0;
			}

			








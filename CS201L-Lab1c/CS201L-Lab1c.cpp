// CS201L-Lab1c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//NAME:
//ASSIGNMENT:
//LAB SECTION:
//LECTURE SECTION:


#include <iostream>
using namespace std;

int main() {

	//set up variables used
	string in1, in2, in3, in4;
	int x1, y1, x2, y2;
	float dist1, dist2;
	char choice;

	//get choice from user:
	//‘e’ to enter values or
	//’g’ to generate values using random values
	cout << "How would you like to get the 4 values: ";
	cin >> choice;

	//get input if ‘e’
	cout << "Please enter 4 values: ";
	cin >> in1 >> in2 >> in3 >> in4;

	srand(time(0));

	//here we will verify input to make sure it is numeric
	//if so, make sure it between -10 and 10 inclusive
	//if not, send error message to the screen & 
	//end program

	//else if input ‘g’
	//generate 4 random numbers between -10 & 10

	//endIf
	//print both points
	//calculate dist1 & dist2 
	//determine which is closer and print
}

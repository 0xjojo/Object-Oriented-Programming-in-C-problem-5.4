// Problem 5.4.cpp : Defines the entry point for the console application.
//
/*5. Write a function called hms_to_secs() that takes three int values—for hours, minutes,
and seconds—as arguments, and returns the equivalent time in seconds(type long).
Create a program that exercises this function by repeatedly obtaining a time value in
hours, minutes, and seconds from the user(format 12:59 : 59), calling the function, and
displaying the value of seconds it returns.*/
#include "stdafx.h"
#include <iostream>
using namespace std;
long time(int, int, int);


int main()
{
	int hour, min, sec;
	char dummy_collon;
	cout << "enter time in format 12:59 : 59 " << endl;
	cin >> hour >> dummy_collon >> min >> dummy_collon >> sec;
	cout << "The value of seconds is:" << time(hour, min, sec);
	return 0;
}
long time(int h, int m, int s) {
	h = h * 60 * 60;
	m = m * 60;
	long t = s + h + m;
	return t;
}


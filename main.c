/*
 * Make a program that calculates the attendance percentage for the total number of days calculated
 * 04/25/2022
 * David J Tinley
 */

#include <stdio.h>

int main() {
	float daysAttended, totalDays; // declaring initial float variables
	//
	printf("Please enter the total number of school days to calculate:\n");
	scanf("%f", &totalDays); // user input for 1st variable
	//
	printf("Please enter the number of days you attended:\n");
	scanf("%f", &daysAttended); // user input for 2nd variable
	//
	const float percentageTotal = (daysAttended / totalDays); // calculating the percentage total
	// making percentageTotal a constant float value
	printf("You attended %.2f percent of the total school days.\n", percentageTotal);
	return 0;
}

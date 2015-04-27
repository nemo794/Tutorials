/*
* 
* 20150424-3.c
*
* Created by Sam Niemoeller on 4/24/15
* 
* Chapter 6, Problem 37
*
* Write a program that asks the user to enter a list of integers.
* The program is to determine the largest value entered and the number of times
* it was entered. For example, if the following series is entered:
*        5 2 15 3 7 15 8 9 5 2 15 3 7
* it would output "The largest value is 15 and it was entered 3 times."
*
*
*/

#include <stdio.h>
#include <limits.h>

int main ()
{
//Local Definitions
int input;
int largest;
int amtLargestNumEntered=0;

//Statements
largest = INT_MIN;
/* INT_MIN was demonstrated in an example in the book, similar to random number generators */

printf("\nPlease enter an integer: ");

while (scanf("%d",&input) != EOF)
	{
	if(input >= largest)
		{
			if (input>largest)
			{
			amtLargestNumEntered=1;
			largest = input;
			printf("Largest number entered so far: %d", largest);
			}
			else
			{
			amtLargestNumEntered++;
			printf ("Number of times Largest Number entered: %d", amtLargestNumEntered);
			}
		}

	printf("\nEnter next integer, <EOF> to stop: ");
	}

printf("\n\nThe largest value entered is %d and it was entered %d times.\n", largest, amtLargestNumEntered);

	return 0;
}
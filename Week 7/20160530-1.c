/*
* 
* 20150530-1.c
*
* Created by Sam Niemoeller on 5/30/15
* 
* Chapter 6, Problem 40
*
* Write a function that creates the following pattern,
* given the height (# of rows) and the width (print characters per line):
* 
* ==========
* *        * 
* *        * 
* *        * 
* *        * 
* ==========
* 
*
*/

#include <stdio.h>

void printPattern (int height, int width);
void printEquals (int width);
void printAsterisks (int width);
int capturePositiveValue ();
int getHeight ();
int getWidth ();


int main()
{

printPattern (getHeight(), getWidth());

return 0;
}



/* Given the height and width, this function prints the following pattern:
* 
* ==========
* *        * 
* *        * 
* *        * 
* *        * 
* ==========
*
*/

void printPattern (int height, int width)
{

printf("\n\n");
printEquals (width);

for (height-=2; height>0; height--)
	printAsterisks (width);

printEquals (width);
printf("\n\n");

return;
}


/* Given the width, this function prints a row of "=".
*/
void printEquals (int width)
{
while (width>0)
	{
	printf("=");
	width--;
	}
printf("\n");

return;
}


/* Given the width, this function prints a row of "*    *".
*/

void printAsterisks (int width)
{
printf("*");
do
	{
	printf(" ");
	width--;
	}
	while (width>2);
printf("*\n");



	return;
}

/*
* This function prompts the user to enter the height (aka number of rows) and returns it.
*/
int getHeight()
{
printf("\nEnter number of rows to print");
printf("\n(must be greater than or equal to 3): ");

	return capturePositiveValue();
}


/*
* This function prompts the user to enter the width
* (aka number of characters wide the pattern is) and returns it.
*/
int getWidth()
{

printf("\nEnter number of characters to print in each row");
printf("\n(must be greater than or equal to 3): ");

	return capturePositiveValue();
}


/*
* This function captures a positive value from the user.
*/

int capturePositiveValue ()
{
//Local Definitions
int positiveValue;

//Statements
scanf("%d", &positiveValue);

while (positiveValue<3)
	{
	printf("Invalid number. Please enter an integer greater than or equal to 3: ");
	scanf("%d", &positiveValue);
	}

return positiveValue;
}
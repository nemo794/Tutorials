/*
* 
* 20150430-1.c
*
* Created by Sam Niemoeller on 4/30/15
* 
* Chapter 6, Problem 43
*
* Write a program that creates the following pattern, 
* with the user entering the number of rows
*  
*  *
*  * * *
*  * * * * * 
*  * * * * * * *
*  * * * * * * *
*  * * * * * 
*  * * *
*  *
* 
*/

#include <stdio.h>

int getRows();
void printPattern (int numRows);
void printRowOfAsterisks (int numAsterisks);

int main()
{
//Local Definitions

//Statements
printPattern (getRows());

	return 0;
}


/*
* This function prompts the user to enter the number of rows and returns it.
*/
int getRows()
{
//Local Definitions
int rows;

//Statements
printf("\nEnter number of rows to print (i.e. the height): ");
scanf("%d", &rows);

while (rows<=0)
	{
	printf("Invalid number. Please enter a positive integer for number of rows: ");
	scanf("%d", &rows);
	}

	return rows;
}


/*
* Given the number of rows, this function prints the following pattern:
* 
*  *
*  * * *
*  * * * * * 
*  * * * * * * *
*  * * * * * * *
*  * * * * * 
*  * * *
*  *
*
*/
void printPattern (int rows)
{
//Local definitions
int numAsterisks;


//Statements
printf("\n\n");

//This prints the Ascending rows
for(numAsterisks=1; numAsterisks<=rows; numAsterisks+=2)
	printRowOfAsterisks(numAsterisks);

//This checks for odd/even numbers and resets the numAsterisks looper accordingly.
if (rows%2)
	numAsterisks-=4;
else 
	numAsterisks-=2;

//This prints the Descending rows.
for(; numAsterisks>0; numAsterisks-=2)
	printRowOfAsterisks(numAsterisks);

printf("\n\n");

	return;
}


/*
* Given the number of asterisks to print, this function prints a row of asterisks.
*/
void printRowOfAsterisks (int numAsterisks)
{
//Local Definitions
int looper;

//Statements
for (looper=1; looper<=numAsterisks; looper++)
	printf("* ");

printf("\n");
	return;
}
/*
* 
* 20150425-6.c
*
* Created by Sam Niemoeller on 4/25/15
* 
* Chapter 6, Problem 39
*
* Write a program that creates the following pattern, 
* given the height (#rows) and width (*'s per row)
*  
*  * * * * * * * *
*  * * * * * * * *
*  * * * * * * * *
*  * * * * * * * *
*  * * * * * * * *
*
*/

#include <stdio.h>

int getHeight();
int getWidth();
void printPattern(int height, int width);

int main()
{
	//Local Definitions

	//Local Statements

printPattern (getHeight(), getWidth());

	return 0;
}


/*
* This function prompts the user to enter the height (aka number of rows) and returns it.
*/
int getHeight()
{
//Local Definitions
int height;

//Statements
printf("\nEnter number of rows to print (i.e. the height): ");
scanf("%d", &height);

while (height<=0)
	{
	printf("Invalid height. Please enter a positive integer for height: ");
	scanf("%d", &height);
	}

	return height;
}


/*
* This function prompts the user to enter the width (aka number of asterisks) and returns it.
*/
int getWidth()
{
//Local Definitions
int width;

//Statements
printf("\nEnter number of asterisks to prints in each row (i.e. the width): ");
scanf("%d", &width);

while (width<=0)
	{
	printf("Invalid width. Please enter a positive integer for the width: ");
	scanf("%d", &width);
	}

	return width;
}


void printPattern (int height, int width)
{
//Local Definitions
int rowLooper;
int asteriskLooper;

//Statements
printf("\n\n");

for(rowLooper=1; rowLooper<=height; rowLooper++)
{
	for(asteriskLooper=1; asteriskLooper<=width; asteriskLooper++)
	{
		printf("*");
	}

	printf("\n");
}

	return;
}
/*
* 
* 20150502-3.c
*
* Created by Sam Niemoeller on 5/2/15
* 
* Chapter 6, Project 55 -- a long one
*
* Write a C Program that can create four different patterns of
* different sizes, as determined by the number of columns or rows.
* 
* PLEASE SEE .PDF IN FOLDER FOR COMPLETE INSTRUCTIONS.
* THANK YOU!!!  :) 
*
*/

#include <stdio.h>

int getOption();
int getSize();
void patternOne (int size);
void patternTwo (int size);
void patternThree (int size);
void patternFour (int size);

int main ()
{
//Local Definitions
int patternOption;
int patternSize;

//Statements
patternOption=getOption();

while (patternOption!=5)
{
	patternSize=getSize();
	switch (patternOption)
		{
		case 1: patternOne(patternSize);
				break;
		case 2: patternTwo(patternSize);
				break;
		case 3: patternThree(patternSize);
				break;
		case 4: patternFour(patternSize);
				break;
		default: printf("ERROR!!!");
		}
	patternOption=getOption();
}

printf("\n\nEnd of Program.  Thank you for playing!\n\n");

	return 0;
}


/*
* This function prompts the user to enter the Pattern Option,
* validates it, and returns it.
*/
int getOption()
{
//Local Definitions
	int option;

//Statements
	printf("\n\n   M E N U\n");
	printf(  "\n1. Pattern One");
	printf(  "\n2. Pattern Two");
	printf(  "\n3. Pattern Three");
	printf(  "\n4. Pattern Four");
	printf(  "\n5. Quit\n\n");


printf("\nChoose an Option (between 1 and 5): ");
scanf("%d", &option);

while (option<1 || option>5)
	{
	printf("Your Option is incorrect.  Please try again.");
	printf("\nChoose an Option (between 1 and 5): ");
	scanf("%d", &option);
	}

return option;
}


/* This function prompts the user to enter the Pattern Size,
* validates it, and returns it.
*/
int getSize()
{
//Local Definitions
	int option;

//Statements
printf("\nChoose a Pattern Size (between 2 and 9): ");
scanf("%d", &option);

while (option<2 || option>9)
	{
	printf("Your Pattern Size is incorrect.  Please try again.");
	printf("\nChoose a Pattern Size (between 2 and 9): ");
	scanf("%d", &option);
	}

return option;
}



/* Given the size of the pattern, this function prints the Pattern One formation.*/

void patternOne (int size)
{
//Local Definitons
int row=1;
int looper;

//Statements
printf("\n\n");

while (row<=size)
	{
	printf("%d",size);

	for (looper=(size-row); looper>0; looper--)
		printf("$");

	printf("\n");
	row++;
	for (looper=0; looper<(row-1) && row!=(size+1); looper++)
		printf("$");
	}

printf("\n\n");

	return;
}


/* Given the size of the pattern, this function prints the Pattern Two formation.*/

void patternTwo (int size)
{
//Local Definitons
int row=1;
int looper;

//Statements
printf("\n\n");

while (row<=size)
	{
	for (looper=0; looper<(size-row); looper++)
		printf("$");

	printf("%d", size);
	for(looper=1; looper<row; looper++)
		printf("$");

	printf("\n");
	row++;
	}

printf("\n\n");

	return;
}


/* Given the size of the pattern, this function prints the Pattern Three formation.*/

void patternThree (int size)
{
//Local Definitons
int row=1;
int looper;

//Statements
printf("\n\n");

while (row<=size)
	{
	for (looper=0; looper<((size+1)-row); looper++)
		printf("$");

	for(looper=1; looper<row; looper++)
		printf("%d", size);

	printf("\n");
	row++;
	}

printf("\n\n");

	return;
}


/* Given the size of the pattern, this function prints the Pattern Four formation.*/

void patternFour (int size)
{
int row=1;
int looper;

//Statements
printf("\n\n");

while (row<=size)
	{
	for (looper=0; looper<((size+1)-row); looper++)
		printf("$");
	printf("\n");

	for(looper=0; looper<row && row!=size; looper++)
		printf("%d", size);

	row++;
	}

printf("\n\n");


	return;
}
/*
* 
* 20150424-2.c
*
* Created by Sam Niemoeller on 4/24/15
* 
* Chapter 6, Problem 34
*
* Write a for loop that will produce each of the following sequences:
* a) 6, 8, 10, 12, ..., 66
* b) 7, 9, 11, 13, ..., 67
* c) the sum of the numbers between 1 and 15 inclusive
* d) the sum of the odd numbers between 15 and 45 inclusive
* e) the first 50 numbers in the series 1, 4, 7, 10, ...(calculate the
*    total 1 + 4 + 7 + 10 + ...)
*
*/

#include <stdio.h>

void exerciseA ();
void exerciseB ();
void exerciseC ();
void exerciseD ();
void exerciseE ();


int main()
{
	//Local Definitions

	//Statements

exerciseA ();
exerciseB ();
exerciseC ();
exerciseD ();
exerciseE ();

	return 0;
}


/* 
* This function executes Ex. A:
* Write a for loop that will produce each of the following sequences:
* a) 6, 8, 10, 12, ..., 66
*/
void exerciseA ()
{
	//Local Definitons
	int i;
	

	//Statements
	printf ("\n\nExercise A running....\n");

	for(i=6; i<66; i+=2)
	{
		printf("%d, ", i);
	}

	printf("%d.", i);
	printf ("\nExercise A complete.");
	return;
}



/* 
* This function executes Ex. B:
* Write a for loop that will produce each of the following sequences:
* b) 7, 9, 11, 13, ..., 67
*/
void exerciseB ()
{
	//Local Definitons
	int i;
	

	//Statements
	printf ("\n\nExercise B running....\n");

	for(i=7; i<67; i+=2)
	{
		printf("%d, ", i);
	}

	printf("%d.", i);
	printf ("\nExercise B complete.");
	return;
}


/* 
* This function executes Ex. C:
* Write a for loop that will produce each of the following sequences:
* c) the sum of the numbers between 1 and 15 inclusive
*/
void exerciseC ()
{
	//Local Definitons
	int sum=0;
	int looper=1;

	//Statements
	printf ("\n\nExercise C running....");

	for (; looper<=15; looper++)
	{
		sum+=looper;
	}

	printf("\nSum of the numbers 1-15: %d", sum);
	printf ("\nExercise C complete.");
	return;
}

/* 
* This function executes Ex. D:
* Write a for loop that will produce each of the following sequences:
* d) the sum of the odd numbers between 15 and 45 inclusive
*/
void exerciseD ()
{
	//Local Definitons
	int looper;
	int sum;

	//Statements
	printf ("\n\nExercise D running....");

	for(sum=0, looper=15; looper<=45; looper+=2)
	{
		sum+=looper; 
	}

	printf("\nSum of the odd numbers 15-45: %d", sum);
	printf ("\nExercise D complete.");
	return;
}


/* 
* This function executes Ex. E:
* Write a for loop that will produce each of the following sequences:
* e) the first 50 numbers in the series 1, 4, 7, 10, ...(calculate the
*    total 1 + 4 + 7 + 10 + ...)
*/
void exerciseE ()
{
	//Local Definitons
	int i;
	int sum;

	//Statements
	printf ("\n\nExercise E running....\n");

	for(sum=0, i=1; i<(50*3); i+=3)
	{
		printf("%d", i);
		if(i<((50-1)*3))
			printf(", ");
		else
			printf(".");
		sum+=i;
	}


	printf ("\nSum of numbers: %d", sum);
	printf ("\nExercise E complete.\n\n");
	return;
}


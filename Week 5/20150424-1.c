/*
* 
* 20150424-1.c
*
* Created by Sam Niemoeller on 4/24/15
* 
* Chapter 6, Problem 33
*
* Write a program that uses a for loop to print a line of 60 asterirsks.
*
*/

#include <stdio.h>

int main ()
{
	// Local Definitions

	int i;

	// Statements

	printf("\n\n");

	for (i=0; i<=60; i++)
	{
		printf("*");
	}

	printf("\n\n");

	return 0;
}
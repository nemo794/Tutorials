/*
* 
* 20150425-5.c
*
* Created by Sam Niemoeller on 4/25/15
* 
* Chapter 6, Problem 38
*
* Write a program that creates the following pattern:
*  1 2 3 4 5 6 7 8 9
*  1 2 3 4 5 6 7 8 
*  1 2 3 4 5 6 7
*  1 2 3 4 5 6
*  1 2 3 4 5
*  1 2 3 4
*  1 2 3
*  1 2
*  1
*
*/




#include <stdio.h>

int main()
{
//Local Definitions
int maxValue = 9;
int num1=1;

//Statements
for(;maxValue>0;maxValue--)
{
	for(num1=1; num1<=maxValue; num1++)
		printf("%d ",num1);
	printf("\n");
}

	return 0;
}
/*
* 
* 20150501-2.c
*
* Created by Sam Niemoeller on 5/1/15
* 
* Chapter 6, Problem 52 - Recursion
*
* Write a program that reads an integer from the keyboard and then
* calls a recursive function to print it out in reverse.
*
* For example, if the user enters 4762, it prints 2674.
* 
*/

#include <stdio.h>

int getNum();
int ReverseOrderOfDigits (int num1);

int main()
{
	//Local Definitions
	int num1;

	//Statements
	printf("\n\n");
	num1=getNum();
	num1=ReverseOrderOfDigits (num1);
	printf("\nThe reverse order of the digits is: %d", num1);
	printf("\n\n");

	return 0;
}



/*
* This function prompts the user to enter an integer and returns it.
*/
int getNum()
{
//Local Definitions
int num1;

//Statements
printf("\nEnter an integer: ");
scanf("%d", &num1);

	return num1;
}


/* 
* This fuctions uses recursion to taken a given integer and
* print its digits in reverse order.
*/
int ReverseOrderOfDigits (num1)
{
	if (num1==0)
		return 0;
	else 
		{
		printf ("%d", num1%10);
		num1/=10;
		}		
		return (num1....GRRRR!!!!!);
		}
}
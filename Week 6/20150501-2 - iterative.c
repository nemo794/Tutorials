/*
* 
* 20150501-2.c
*
* Created by Sam Niemoeller on 5/1/15
* 
* Chapter 6, Problem 52 - Recursion
*
* Write a program that reads an integer from the keyboard and then
* calls a recursive function to print it out in reverse. (Note - I ended up
* doing this using the iterative approach first...)  Recursive is feeling
* like derivatives in my mind, very much having a hard time wrapping my
* mind around it.  :(
*
* For example, if the user enters 4762, it prints 2674.
* 
*/

#include <stdio.h>

int getNum();
void printDigitsReverseOrder (int num1);

int main()
{
	//Local Definitions
	int num1;

	//Statements
	printf("\n\n");
	num1=getNum();
	printDigitsReverseOrder (num1);
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
void printDigitsReverseOrder (num1)
{
	if (num1==0)
		{
		printf ("0");
		return;
		}
	else 
		{
		if (num1<0)
			{
			printf ("-");
			num1*=-1;
			}
		do
		{
		printf ("%d", num1%10);
		num1/=10;
		}
		while (num1>0);
		}
return;
}
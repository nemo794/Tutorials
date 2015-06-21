/*
* 
* 20150502-3.c
*
* Created by Sam Niemoeller on 6/7/15
* 
* Chapter 6, Project 57 -- a long one
*
* Write a C Program to help a prospective borrower calculate the monthly payment
* for a loan.  The program also prints the amortization (payoff) table
* to show the balance of the loan after each monthly payment.
* 
* PLEASE SEE .PDF IN FOLDER FOR COMPLETE INSTRUCTIONS.
* THANK YOU!!!  :) 
*
*/

#include <stdio.h>

void getUserData (int *principal, float *interestRateYear, int *numYears);
int calculateMonthlyPayment (int principal, float interestRateYear, int numYears);
void printInformation (int principal, float interestRateYear, int numYears);
void printAmortizationTable ();
int capturePositiveInteger (void);
float capturePositiveFloat (void);

int main()
{
//Local Definitions
float principal;
int interestRateYear;
int numYears;

//Statements
getUserData (&principal, &interestRateYear, &numYears);

printInformation (principal, interestRateYear, numYears);

	return 0;
}



/* This function prompts user to enter the principal for a loan,
* the interest rate per year, and the number of years for that loan.
* The function then returns these values via pointers.
*/
void getUserData (int *principal, float *interestRateYear, int *numYears)
{
//Local Definitions
float floatNum;

//Statements
	printf("\n");

	printf("\nAmount of the loan (Principal, ex. xxxxx.xx)? $ ");
	floatNum=capturePositiveFloat();
	*principal=(int)(floatNum*100);

	printf("\nInterest rate per year (per cent, ex. xx.xx)? ");
	*interestRateYear=capturePositiveFloat();

	printf("\nNumber of years? ");
	*numYears=capturePositiveInteger();

	return;
}



/*
* This function captures a positive integer from the user.
*/

int capturePositiveInteger ()
{
//Local Definitions
int positiveValue;

//Statements
scanf("%d", &positiveValue);

while (positiveValue<=0)
	{
	printf("Invalid number. Please enter a positive integer: ");
	scanf("%d", &positiveValue);
	}

return positiveValue;
}


/*
* This function captures a positive float number from the user.
*/

float capturePositiveFloat ()
{
//Local Definitions
float positiveValue;

//Statements
scanf("%f", &positiveValue);

while (positiveValue<=0)
	{
	printf("Invalid number. Please enter a positive number (ex. xxxxx.xx): ");
	scanf("%f", &positiveValue);
	}

return positiveValue;
}


/* This function prints the basic information for the loan statement.
*/
void printInformation (int principal, float interestRateYear, int numYears)
{
//Local Defintions
float floatPrincipal;
int numMonths = numYears*12;
float interestRateMonth = (interestRateYear/12)/100;
float monthlyPayment = calculateMonthlyPayment(principal, interestRateYear, numYears);

//Statements
printf("\n\n");
printf("\nThe amount of the loan (principal): \t%8.2f", principal/100.00));
printf("\nInterest rate/year: \t\t%8.2f", interestRateYear);
printf("\nInterest rate/month: \t\t%8.6f)", interestRateMonth);
printf("\nNumber of Years: \t\t%8d", numYears);
printf("\nNumber of Months: \t\t%8d", numMonths);
printf("\nMonthly Payment: \t\t %8.2f", monthlyPayment);

printAmortizationTable (numMonths, principal, monthlyPayment, );

	return;
}


/* This function is given the principal (in cents), the yearly interest rate
* (as a percentage), and the number of years of the loan (as an integer)
* and returns the monthly payment (in cents).
*/

float calculateMonthlyPayment (int principal, float interestRateYear, int numYears)
{
//Local Definitions
float monthlyPayment;
float interestRateMonth;
float Q;

//Statements
interestRateMonth=(interestRateYear/12)/100;
Q = principal / (principal-1);

monthlyPayment=(int)((principal*interestRateMonth*Q)+0.5);
monthlyPayment/=100.00;

	return monthlyPayment;
}


/* This function is 
*/

void printAmortizationTable ()


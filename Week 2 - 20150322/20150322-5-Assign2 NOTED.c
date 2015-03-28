/*
 *  20150322-5.c
 *
 * Created by Sam Niemoeller for 3/22/15.
 * Assignment #2 - NOTED
 *
 * Write a program that prepares a payroll earning statement.
 * (see .pdf email attachment for full details)
 *
 */

#include <stdio.h>

int makeIntoCents (float dollars);
float makeIntoDollars (int cents);

int main (void)
{
    /* Local Definitions */
    float weeksProfitDollars;
    int weeksProfitCents;
    char F_Name[21] = "";
    char L_Name[21] = "";
    int IDNum;
    int years;
    float salesAmtDollars;
    int salesAmtCents;
    float commissionDollars;
    int commissionCents;
    float bonusDollars;
    int bonusCents;
    float grossSalDollars;
    int grossSalCents;
    float retirementDollars;
    int retirementCents;
    float stateTaxDollars;
    int stateTaxCents;
    float fedTaxDollars;
    int fedTaxCents;
    float totalDedDollars;
    int totalDedCents;
    float netSalaryDollars;
    int netSalaryCents;
    
    
    /* Statements */
    
    printf ("\nEnter profit for the week: $");
    scanf ("%f", &weeksProfitDollars);
    printf ("Enter information for the employee:\n");
    printf ("Enter First Name: ");
    scanf ("%s", F_Name);
    printf ("Enter Last Name: ");
    scanf ("%s", L_Name);
    printf ("Enter ID Number: ");
    scanf ("%d", &IDNum);
    printf ("Enter Years of Experience: ");
    scanf ("%d", &years);
    printf ("Enter Sales amount: $");
    scanf ("%f", &salesAmtDollars);
    
    salesAmtCents = makeIntoCents (salesAmtDollars);
    weeksProfitCents = makeIntoCents (weeksProfitDollars);
    
    commissionCents = salesAmtCents * (12.5 / 100);
    bonusCents = (years * (weeksProfitCents * (0.5 / 100))) + 5000;
    grossSalCents = commissionCents + bonusCents;
    retirementCents = grossSalCents * (8.0 / 100.0);
    stateTaxCents = grossSalCents * (10.0 / 100);
    fedTaxCents = grossSalCents * (25.0 / 100);
    totalDedCents = retirementCents + stateTaxCents + fedTaxCents;
    netSalaryCents = grossSalCents - totalDedCents;
    
    printf ("\nCommission in Cents: %d", commissionCents);
    printf ("\nBonus in Cents: %d", bonusCents);
    printf ("\nGross Salary in Cents: %d", grossSalCents);
    printf ("\nRetirement in Cents: %d", retirementCents);
    printf ("\nState Tax in Cents: %d", stateTaxCents);
    printf ("\nFed Tax in Cents: %d", fedTaxCents);
    printf ("\nTotal Deductions in Cents: %d", totalDedCents);
    printf ("\nNet Salary in Cents: %d", netSalaryCents);
    
    
    salesAmtDollars = makeIntoDollars (salesAmtCents);
    commissionDollars = makeIntoDollars (commissionCents);
    bonusDollars = makeIntoDollars (bonusCents);
    grossSalDollars = makeIntoDollars (grossSalCents);
    retirementDollars = makeIntoDollars (retirementCents);
    stateTaxDollars = makeIntoDollars (stateTaxCents);
    fedTaxDollars = makeIntoDollars (fedTaxCents);
    totalDedDollars = makeIntoDollars (totalDedCents);
    netSalaryDollars = makeIntoDollars (netSalaryCents);
    
    printf ("\n\nPayroll report for %s %s, Id number %d:", F_Name, L_Name, IDNum);
    printf ("\nSales:\t\t\t$ %10.2f", salesAmtDollars);
    printf ("\nCommission:\t\t$ %10.2f", commissionDollars);
    printf ("\nBonus:\t\t\t$ %10.2f", bonusDollars);
    printf ("\nGross Salary:\t\t$ %10.2f", grossSalDollars);
    printf ("\nRetirement:\t\t$ %10.2f", retirementDollars);
    printf ("\nState Tax:\t\t$ %10.2f", stateTaxDollars);
    printf ("\nFederal Tax:\t\t$ %10.2f", fedTaxDollars);
    printf ("\nTotal Deductions:\t$ %10.2f", totalDedDollars);
    printf ("\nNet Salary:\t\t$ %10.2f\n\n", netSalaryDollars);
    
    
    return 0;
}

// A function that turns floating-point dollars into integral cents.
int makeIntoCents (float dollars)
{
    //Local Definitions
    int cents;
    
    //Statements
    cents = dollars * 100;
    
    return cents;
}


//A Function that turns integral cents into floating-point dollars.
float makeIntoDollars (int cents)
{
    //Local Definitions
    float dollars;
    
    //Statements
    dollars = (float)cents / 100.0;
    
    return dollars;
}
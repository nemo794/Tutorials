/*
 *  20150322-5.c
 *
 * Created by Sam Niemoeller for 3/22/15.
 * Assignment #2
 *
 * Write a program that prepares a payroll earning statement.
 * (see .pdf email attachment for full details)
 *
 */

#include <stdio.h>

int main (void)
{
    /* Local Definitions */
    float weeksProfit;
    char F_Name[21] = "";
    char L_Name[21] = "";
    int IDNum;
    int years;
    float salesAmt;
    float commission;
    float bonus;
    float grossSal;
    float retirement;
    float stateTax;
    float fedTax;
    float totalDed;
    float netSalary;
    
    
    /* Statements */
    
    printf ("\nEnter profit for the week: ");
    scanf ("%f", &weeksProfit);
    printf ("Enter information for the employee:\n");
    printf ("Enter First Name: ");
    scanf ("%s", &F_Name);
    printf ("Enter Last Name: ");
    scanf ("%s", &L_Name);
    printf ("Enter ID Number: ");
    scanf ("%d", &IDNum);
    printf ("Enter Years of Experience: ");
    scanf ("%d", &years);
    printf ("Enter Sales amount: ");
    scanf ("%f", &salesAmt);
    
    commission = salesAmt * (12.5 / 100);
    bonus = ((float)years * (weeksProfit * (0.5 / 100))) + 50;
    grossSal = commission + bonus;
    retirement = grossSal * (8.0 / 100);
    stateTax = grossSal * (10.0 / 100);
    fedTax = grossSal * (25.0 / 100);
    totalDed = retirement + stateTax + fedTax;
    netSalary = grossSal - totalDed;
    
    printf ("\n\nPayroll report for %s %s, Id number %d:", F_Name, L_Name, IDNum);
    printf ("\nSales:\t\t\t$ %10.2f", salesAmt);
    printf ("\nCommission:\t\t$ %10.2f", commission);
    printf ("\nBonus:\t\t\t$ %10.2f", bonus);
    printf ("\nGross Salary:\t\t$ %10.2f", grossSal);
    printf ("\nRetirement:\t\t$ %10.2f", retirement);
    printf ("\nState Tax:\t\t$ %10.2f", stateTax);
    printf ("\nFederal Tax:\t\t$ %10.2f", fedTax);
    printf ("\nTotal Deductions:\t$ %10.2f", totalDed);
    printf ("\nNet Salary:\t\t$ %10.2f\n\n", netSalary);
    
    
    return 0;
}
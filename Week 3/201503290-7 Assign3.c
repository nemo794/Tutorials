/*
 *
 *  20150315-7 Assignment.c
 *
 *
 *  Created by Sam Niemoeller on 3/29/15.
 *
 * Assignment 3
 *
 * This program calculates property tax on real estate.
 
 * Please see Assignment 3 Intructions.pdf for full details.
 *
 *
 */


#include <stdio.h>
#include <math.h>
#define TAX_RATE 0.0105

void Intro ();
int Calc_Taxable_Amount (int AssessedValueCents);
int Calc_Tax (int TaxableAmtCents);
void Print_Results (float AssessedValue, float TaxableAmt, float PrptyTax);

int main ()
{
    //Local Definitions
    float AssessedValue;
    int AssessedValueCents;
    float AssessedValueDollars;
    int TaxableAmtCents;
    float TaxableAmtDollars;
    int PrptyTaxCents;
    float PrptyTaxDollars;
    
    // Statements
    
    
    printf ("\n\nPlease enter the assessed value of the property: $ ");
    scanf ("%f", &AssessedValue);
    
    AssessedValueCents = AssessedValue * 100;
    
    Intro ();
    
    TaxableAmtCents = Calc_Taxable_Amount (AssessedValueCents);
    TaxableAmtDollars = floor ((TaxableAmtCents / 100.0) + 0.5);
    
    PrptyTaxCents = TaxableAmtCents * TAX_RATE;
    PrptyTaxDollars = floor ((PrptyTaxCents / 100.0) + 0.5);
    
    Print_Results (AssessedValue, TaxableAmtDollars, PrptyTaxDollars);
    
    return 0;
}


//====This function will print the introduction====
void Intro ()
{
    //Statements
    printf ("\nProgrammer:\t\t Sam N.");
    printf ("\nProgramming Assignment:\t 3");
    printf ("\nDue Date:\t\t March 29, 2015");
    printf ("\nProgram Description:\t The program will calculate the amount of\n\t\t\t property taxes owed.\n\n");
    
    return;
}

//====This function will calculate the taxable amount.
int Calc_Taxable_Amount (int AssessedValueCents)
{
    //Local Definitions
    int TaxableAmtCents;
    
    //Statements
    
    TaxableAmtCents = floor ((AssessedValueCents * (92.0 / 100))+ 0.5);
    
    return TaxableAmtCents;
}

//=====This function will calculate the amount of property tax owed.
int Calc_Tax (int TaxableAmtCents)
{
    //Local Definitions
    int PrptyTaxCents;
    
    //Statements
    
    PrptyTaxCents = floor ((TaxableAmtCents * TAX_RATE)+ 0.5);
    
    return PrptyTaxCents;
}


//====This function will print the results.
void Print_Results (float AssessedValue, float TaxableAmt, float PrptyTax)
{
    //Local Definitions
    float TaxRateFormatted;
    
    //Statements
    TaxRateFormatted = TAX_RATE * 100;
    
    printf ("\nAssessed Value:\t\t$%1.2f", AssessedValue);
    printf ("\nTaxable Amount:\t\t$%1.2f", TaxableAmt);
    printf ("\nTax Rate for:\t\t$%1.2f%%", TaxRateFormatted);
    printf ("\nProperty Tax:\t\t$%1.2f\n\n", PrptyTax);
    
    return;
}


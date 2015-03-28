/*
 *
 * 20150315-6.c
 *
 *
 * Created by Sam Niemoeller on 3/28/15.
 *
 * Chapter 4, Problem 39
 *
 * Write a function that receives a positive floating-point
 * number and rounds it to two decimal places.
 * (fyi - the book gives a hint about converting to an int first)
 *
 * Print the rounded numbers to 6 decimal places.
 *
 */

#include <stdio.h>
#include <math.h>

void rndTwoDecimals (float a);

int main ()
{
    float num1;
    
    printf ("\n\nEnter a positive number with 1-6 decimal places: ");
    scanf ("%f", &num1);
    
    rndTwoDecimals (num1);
    
    return 0;
}


// ===== This is  a function that receives a positive floating-point
//       number and rounds it to two decimal places. ====
void rndTwoDecimals (float a)
{
    float num1;
    int num2;
    float num3;
    
    num1 = a * 100;
    num2 = (int) (ceil (num1));
    printf ("\n%d\n", num2);
    num3 = num2 / 100.0;
    
    printf ("\nThe rounded-up number is: %1.2f\n\n", num3);
    
    return;
}

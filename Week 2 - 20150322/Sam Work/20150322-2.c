/*
 *  20150322-2.c
 *
 * Created by Sam Niemoeller for 3/22/15.
 * Chapter 3, Problem 31
 *
 * Write a program that extracts and prints the
 * right-most digit of the integral portion of a float.
 *
 * I'm not happy with the output display.
 * Without simply typing in spaces, how does one get
 * the numbers to line up?  :(
 */

#include <stdio.h>

int main (void)
{
    /* Local Definitions */
    
    float userFloatNum;
    int convertToInt;
    int rightmostDgt;
    
    
    /* Statements */
    
    printf ("Enter a number with a decimal: ");
    scanf ("%f", &userFloatNum);
    
    convertToInt = (int)userFloatNum;
    rightmostDgt = convertToInt % 10;
    
    printf ("\nFloat number entered: \t\t\t\t %1.3f", userFloatNum);
    printf ("\nRight-most digit of the integral portion:\t %d\n\n", rightmostDgt);
    
    return 0;
}
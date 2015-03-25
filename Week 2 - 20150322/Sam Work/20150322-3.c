/*
 *  20150322-3.c
 *
 * Created by Sam Niemoeller for 3/22/15.
 * Chapter 3, Problem 35
 *
 * Write a program that converts Centigrade to Fahrenheit.
 *
 *
 */

#include <stdio.h>

int main (void)
{
    /* Local Definitions */
    float Fahrenheit;
    float Centigrade;
    
    
    /* Statements */
    printf ("Enter degrees in Centigrade: ");
    scanf ("%f", &Centigrade);
    
    Fahrenheit = 32 + (Centigrade * (180.0 / 100.0));
    
    printf ("\n\nDegrees in Centigrade Entered: %1.1f", Centigrade);
    printf ("\n%1.1f degrees Centigrade equals %1.1f degrees Fahrenheit.\n\n", Centigrade, Fahrenheit);
    
    
    return 0;
}
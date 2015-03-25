/*
*  20150322-1.c
*
* Created by Sam Niemoeller for 3/22/15.
* Chapter 3, Problem 29
*
*/

#include <stdio.h>

int main (void)
{
    /* local definitions */
    float x;
    float y;
    float p;
    float s;
    float total;
    
    /* statements */
    printf ("Enter a number for x: ");
    scanf ("%f", &x);
    printf ("Enter a number for y: ");
    scanf ("%f", &y);
    
    p = x * y;
    s = x + y;
    total = (s * s) + (p * (s - x) * p + y);
    
    printf ("\n\n");
    printf ("Number entered for x:  \t\t\t%10.2f\n", x);
    printf ("Number entered for y:  \t\t\t%10.2f\n", y);
    printf ("If p = x * y, then p is: \t\t%10.2f\n", p);
    printf ("If s = x + y, then s is: \t\t%10.2f\n", s);
    printf ("Total of s^2 + (p * (s - x) * p + y): \t%10.2f\n", total);
    
    return 0;
}
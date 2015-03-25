/*
 *  20150322-4.c
 *
 * Created by Sam Niemoeller for 3/22/15.
 * Chapter 3, Problem 39
 *
 * Write a program that calculates and prints the
 * next three numbers in the Fibonacci series
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
 * Only use three variables: fib1, fib2, fib3
 *
 */

#include <stdio.h>

int main (void)
{
    /* Local Definitions */
    int fib1 = 13;
    int fib2 = 21;
    int fib3;
    
    /* Statements */
    
    printf ("\n\nThe first numbers in the Fibonacci series are: \t0, 1, 1, 2, 3, 5, 8, 13, 21.");

    fib3 = fib1 + fib2;
    fib1 = fib2 + fib3;
    fib2 = fib3 + fib1;
    
    printf ("\nThe next three numbers in the series are: \t%d, %d, %d.\n\n", fib3, fib1, fib2);
    
    return 0;
}
/*
 *
 * 20150315-3.c
 *
 *
 * Created by Sam Niemoeller on 3/28/15.
 *
 * Chapter 4, Problem 29
 *
 * Write a program that generates a random number
 * from the following set: 1, 2, 3, 4, 5, 6
 * The seed for the series is 997.
 *
 */

#include <stdio.h>
#include <stdlib.h>


int main ()
{
    //Local Definitions
    int rand1;
    
    //Statements
    printf ("\nBeginning Random Number Generation from the numbers 1-6....\n");
    
    srand (997);
    rand1 = rand () % 6 + 1;
    
    printf ("\nThe Random Number is: %d\n\n", rand1);
    
    return 0;
}
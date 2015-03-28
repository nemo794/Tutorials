/*
 *
 * 20150315-3v2.c
 *  **Same as test, except for the seed.  Playtime with Seeds!
 *
 * Created by Sam Niemoeller on 3/28/15.
 *
 * Chapter 4, Problem 29
 *
 * Write a program that generates a random number
 * from the following set: 1, 2, 3, 4, 5, 6
 * The seed for the series is the computer's time.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()
{
    //Local Definitions
    int rand1;
    
    //Statements
    printf ("\nBeginning Random Number Generation from the numbers 1-6....\n");
    
    srand (time (NULL));
    rand1 = rand () % 6 + 1;
    
    printf ("\nThe Random Number is: %d\n\n", rand1);
    
    return 0;
}
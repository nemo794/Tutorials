/*
 * 
 *  20150315-2.c
 *
 *
 *  Created by Sam Niemoeller on 3/28/15.
 *
 * Chapter 4, Problem 28
 *
 * Write a function to print your name, as shown in the book's
 * example.  Write a call as it would be coded in a callin
 * function, such as main.
 *
 */


#include <stdio.h>

// Prototype Declarations

void printName ();

int main ()
{
    // Local Definitions
    // none
    
    // Local Statements
    printName ();
    
    return 0;
}

void printName ()
{
    printf ("\n\n**************************");
    printf ("\n\n*                        *");
    printf ("\n\n*     Sam Niemoeller     *");
    printf ("\n\n*                        *");
    printf ("\n\n**************************\n\n");
    
    return;
}
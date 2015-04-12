/*
 *
 *  201500407-1.c
 *
 *
 *  Created by Sam Niemoeller on 4/7/15.
 *
 * Chapter 5, Problem 47
 *
 * This program writes the code for a flowchart that
 * is printed in the textbook.
 *
 *
 */


#include <stdio.h>

int main ()
{
    //Local Definitions
    int   x;
    int   y;
    float z;
    
    //Statements
    printf ("\nEnter an integer value for x: ");
    scanf ("%d", &x);
    printf ("\nEnter an integer value for y: ");
    scanf ("%d", &y);
    
    if (x > 0)
    {
        y = x - 1;
        z = 2 * x;
    }
    else
        {
            if (y > 0)
                z = y;
            else
            {
                z = x;
                y = z + 1;
            }
        z = z + 1;
        }
    
    printf ("\n\nAfter Processing, x = %d, y = %d, z = %f", x, y, z);
    
    return 0;
}

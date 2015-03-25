/*
 * Week 2 - Chapter 3
 * Expressions, Statements, Evaluating Statements
 * aka Side Effects are tricky
 *  Sam Niemoeller
 *  22 March 2015
 */

#include <stdio.h>

int main(void)
{
    /* Local Definitions */
    int intNum1;
    int intNum2;
    int intCalc;
    
    
    /* Statements */
    printf ("Enter two integral numbers: ");
    scanf ("%d %d", &intNum1, &intNum2);
    
    intCalc = intNum1 / intNum2;
    
    printf ("%d / % d is %d", intNum1, intNum2, intCalc);
    
    intCalc = intNum1 % intNum2;
    
    printf (" with a remainder of: %d\n", intCalc);
    
    return 0;
}
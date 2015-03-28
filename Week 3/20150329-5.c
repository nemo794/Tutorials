/*
 *
 *  20150315-5.c
 *
 *
 *  Created by Sam Niemoeller on 3/28/15.
 *
 * Chapter 4, Problem 37
 *
 * Expand the calculator program on Page 152 to calculate
 * the product, quotient, and modulus of the number.
 * (The calculator program simply takes to user-defined integers
 * and then automatically adds and subtracts them.)
 * 
 * Calculate the quotient and modulus in one function
 * using pass by address.
 *
 */

#include <stdio.h>

int add      (int a, int b);
int subt     (int a, int b);
int multiply (int a, int b);
void divide  (int a, int b, int *quotient, int *remndr);

int main ()
{
    // Local Definitions
    int a;
    int b;
    int sum;
    int diff;
    int product;
    int quotient = 0;
    int remndr = 0;
    
    //Statements
    printf ("\n\nEnter two integers, separated by a space: ");
    scanf ("%d %d", &a, &b);
    
    sum = add (a, b);
    diff = subt (a, b);
    product = multiply (a, b);
    divide (a, b, &quotient, & remndr);

    printf ("\n%4d + %4d = %7d", a, b, sum);
    printf ("\n%4d - %4d = %7d", a, b, diff);
    printf ("\n%4d * %4d = %7d", a, b, product);
    printf ("\n%4d / %4d = %7d, remainder %3d\n\n\n", a, b, quotient, remndr);
    
    return 0;
}

// ====This function adds two integers and returns the same====
int add (int a, int b)
{
    return (a + b);
}


// ====This function subtracts two integers and returns the same====
int subt (int a, int b)
{
    return (a - b);
}


// ====This function multiplies two integers and returns the same====
int multiply (int a, int b)
{
    return (a * b);
}


// ====This function divides two integers and places the integral quotient and remainder in the calling function====
void divide (int a, int b, int *quotient, int *remndr)
{
    *quotient = a / b;
    *remndr = a % b;
    
    return;
}
/*
 *
 *  20150408-3 Assignment.c
 *
 *
 *  Created by Sam Niemoeller on 4/8/15.
 *
 *  Chapter 5, Problem 51
 *
 * Write a function called parkingCharge that, given a type
 * of vehicle and the hours a vehicle spent in the parking lot,
 * returns the parking charge based on the rates shown below:
 *
 * c = car = $2/hr
 * b = bus = $3/hr
 * t = truck = $4/hr
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define RATE_CAR   2;
#define RATE_BUS   3;
#define RATE_TRUCK 4;


char vehicleAndHrs (float *hrs);
float parkingCharge (char type, float hrs);
int getRate (char type);
void printType (char type);

int main ()
{
    //Local Definitions
    char type = 'x';
    float hrs;
    float totalOwed;
    int rate;
    
    //Statements
    type = vehicleAndHrs (&hrs);
    totalOwed = parkingCharge (type, hrs);
    rate = getRate(type);
    
    printf ("\n\nYou parked a ");
    printType(type);
    printf (" for %4.2f hrs at $%d/hr", hrs, rate);
    printf ("\nand owe $%1.2f.\n\n", totalOwed);
    
    return 0;
}


//======This function asks the user for the vehicle type and hours
//      the vehicle was parked.====
char vehicleAndHrs (float *hrs)
{
    //Local Definitions
    char type = 'x';
    
    //Statements
    printf("\n\nMenu Options:");
    printf(  "\nc = car");
    printf(  "\nb = bus");
    printf(  "\nt = truck");
    printf("\n\nEnter c, b, or t to choose a vehicle type: ");
    scanf("%c", &type);

    if (type != 'c' || type != 'b' || type != 't')
    {
        printf ("\n\nInvalid vehicle type entered. Please start over!\n");
        exit (1);
    }
    
    
    printf("\nEnter number of hours parked: ");
    scanf ("%f", hrs);

    if (*hrs < 0)
    {
        printf ("\n\nNumber of hours must be positive. Please start over!\n");
        exit (1);
    }
    
    return type;
}


//===This function takes the car type and amount of time and
//   returns the dollar amount owed.===
float parkingCharge (char type, float hrs)
{
    return hrs * getRate(type);
}


//===This function takes the vehicle type and returns the rate
//   for that vehicle type.===
int getRate (char type)
{
    if (type == 'c')
    {
        return RATE_CAR;
    }
    else if (type == 'b')
    {
        return RATE_BUS;
    }
    else
    {
        return RATE_TRUCK;
    }
}


void printType (char type)
{
    if (type == 'c')
    {
        printf ("car");
    }
    else if (type == 'b')
    {
        printf ("bus");
    }
    else
    {
        printf ("truck");
    }
    
    return;
}
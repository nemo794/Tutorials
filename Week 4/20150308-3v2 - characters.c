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
float parkingCharge (char type, float hrs, int *rate);

int main ()
{
    //Local Definitions
    char type = 't';
    float hrs;
    float totalOwed;
    int rate;
    
    //Statements
    type = vehicleAndHrs (&hrs);
    totalOwed = parkingCharge (type, hrs, &rate);
    
    
    printf ("\n\nYou parked a %c for %f hrs at $%d/hr", type, hrs, rate);
    printf ("\nand owe $%6.2f.", totalOwed);
    
    return 0;
}


//======This function asks the user for the vehicle type and hours
//      the vehicle was parked.====
char vehicleAndHrs (float *hrs)
{
    //Local Definitions
    char type = 't';
    
    //Statements
    printf("\n\nMenu Options:");
    printf(  "\nc = car");
    printf(  "\nb = bus");
    printf(  "\nt = truck");
    printf("\n\nEnter c, b, or t to choose a vehicle type: ");
    scanf("%c", type);

    printf("\nEnter number of hours parked: ");
    scanf ("%f", *hrs);
    
    return type;
}

//===This function takes the car type and amount of time and
//   returns the rate and dollar amount owed.===
float parkingCharge (char type, float hrs, int *rate)
{
    //Local Definitions
    float parkingCharge;
    
    //Statements
    if (type == 'c')
        {
            parkingCharge = hrs * RATE_CAR;
            *rate = RATE_CAR;
        }
    else if (type == 'b')
    {
        parkingCharge = hrs * RATE_BUS;
        *rate = RATE_BUS;
    }
    else if (type == 't')
    {
        parkingCharge = hrs * RATE_TRUCK;
        *rate = RATE_TRUCK;
    }
    else
    {
        printf ("\n\nInvalid vehicle type entered. Please start over!\n");
        exit (1);
    }
        
    return parkingCharge;
}

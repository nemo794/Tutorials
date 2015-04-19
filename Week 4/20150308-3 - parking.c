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
 * car = $2/hr
 * bus = $3/hr
 * truck = $4/hr
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define RATE_CAR   2;
#define RATE_BUS   3;
#define RATE_TRUCK 4;


int vehicleAndHrs (float *hrs);
float parkingCharge (int type, float hrs);
int getRate (int type);

int main ()
{
    //Local Definitions
    int type;
    float hrs;
    float totalOwed;
    int rate;
    
    //Statements
    type = vehicleAndHrs (&hrs);
    totalOwed = parkingCharge (type, hrs);
    rate = getRate(type);
    
    printf ("\nYou parked a ");
    if (type == 1)
        printf("car ");
    else if (type == 2)
        printf("bus ");
    else
        printf("truck ");
    
    printf ("for %4.2f hrs at $%d/hr and owe $%6.2f.\n\n", hrs, rate, totalOwed);

    return 0;
}


//======This function asks the user for the vehicle type and hours
//      the vehicle was parked.====
int vehicleAndHrs (float *hrs)
{
    //Local Definitions
    int type;
    
    //Statements
    printf("\n\nMenu Options:");
    printf(  "\n1 = car");
    printf(  "\n2 = bus");
    printf(  "\n3 = truck");
    printf("\n\nEnter 1, 2, or 3 to choose a vehicle type: ");
    scanf("%d", &type);

    if (type < 1 || type > 3)
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
float parkingCharge (int type, float hrs)
{
    return hrs * getRate(type);
}


//===This function takes the vehicle type and returns the rate
//   for that vehicle type.===

int getRate (int type)
{
    switch (type)
    {
        case 1:
            return RATE_CAR;
            break;
        case 2:
            return RATE_BUS;
            break;
        case 3:
            return RATE_TRUCK;
    }
}
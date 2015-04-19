/*
 *
 *  20150408-2 Assignment.c
 *
 *
 *  Created by Sam Niemoeller on 4/8/15.
 *
 *  Chapter 5, Problem 49
 *
 * Write a function called day_of_week that, given an integer
 * between 0 and 6, prints the corresponding day of the week.
 *
 * Assume that (0) is Sunday.
 *
 * Note - I believe the correct practise would to double-check
 * that the user entered 0-6 before continuing to the next part
 * of the program; however, the book says that this will come a
 * later on....
 *
 *
 */

#include <stdio.h>

int menu ();
void day_of_week (int day);


int main ()
{

    day_of_week (menu());
    
    return 0;
}


//======This function prints a menu and lets the user select
//      what day of the week they'd like==========
int menu ()
{
    //Local Definitions
    int day;
    
    
    //Statements
    
    printf("\n\nMenu Options:");
    printf(  "\n0 = Sunday");
    printf(  "\n1 = Monday");
    printf(  "\n2 = Tuesday");
    printf(  "\n3 = Wednesday");
    printf(  "\n4 = Thursday");
    printf(  "\n5 = Friday");
    printf(  "\n6 = Saturday");
    printf("\n\nEnter a number 0-6 from above to choose a day of the week: ");
    scanf("%d", &day);
    
    return day;
}


//========This function prints the day of the week input into it in
//               integer format. =========

void day_of_week (int day)
{
    //Local Definitions
    //Statements
    
    switch (day) {
        case 0:
            printf("\n\nYou selected Sunday.\n\n");
            break;
        case 1:
            printf("\n\nYou selected Monday.\n\n");
            break;
        case 2:
            printf("\n\nYou selected Tuesday.\n\n");
            break;
        case 3:
            printf("\n\nYou selected Wednesday.\n\n");
            break;
        case 4:
            printf("\n\nYou selected Thursday.\n\n");
            break;
        case 5:
            printf("\n\nYou selected Friday.\n\n");
            break;
        case 6:
            printf("\n\nYou selected Saturday.\n\n");
            break;
            
        default:
            printf("\n\nYou did not enter a valid day of the week.");
            printf("\nPlease run the program again. Thanks!\n\n");
            break;
    }
    
    return;
}
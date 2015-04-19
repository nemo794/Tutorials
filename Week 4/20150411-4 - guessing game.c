/*
 *
 *  20150411-4.c
 *
 *
 *  Created by Sam Niemoeller on 4/11/15.
 *
 *  Chapter 5, Project 59
 *
 * The Guessing Game
 *
 * The computer is to generate a random number between 1 and 20.
 * User is given up to 5 tries to guess the exact number.
 * After each guess, you are to tell the user if the number guessed
 * is greater than, less than, or equal to the random number.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getGuess ();
int checkGuess (int guess, int rand1);
void congrats ();
void sorry (int rand1);

int main ()
{
    //Local Definitions
    int rand1;
    int guess;
    
    //Statements
    
    srand(time(NULL));
    rand1 = rand() % 20 + 1;
    
    printf("\n\nI am thinking of a number between 1 and 20.");
    printf("\n\tCan you guess what it is?\t");

    guess = getGuess();
    
    guess = checkGuess(guess, rand1);
    guess = checkGuess(guess, rand1);
    guess = checkGuess(guess, rand1);
    guess = checkGuess(guess, rand1);
    
    if (guess == rand1)
        congrats ();
    else
        sorry (rand1);

    return 0;
}

//====This function captures the user's guess and checks
//    if it's within the correct range.
int getGuess ()
{
    //Local Definitions
    int num2;
    
    //Statements
    scanf ("%d", &num2);
 
    while (num2 < 1 || num2 > 20)
    {
        printf("\nSorry, you entered an invalid number.");
        printf("\nPlease enter an integer between 1 and 20: ");
        scanf("%d", &num2);
    }
    
    return num2;
}


//=====This function takes the user's guess and the random number
//    and tells the user if it's correct, too low, or too high.=====
int checkGuess (int guess, int rand1)
{
    if (guess == rand1)
        congrats();
    else if (guess < rand1)
        {
        printf("\tYour guess is low. Try again:\t");
        guess = getGuess();
        }
    else
        {
        printf("\tYour guess is high. Try again:\t");
        guess = getGuess();
        }

    return guess;
}


//=====This function prints the success report.=====
void congrats ()
{
    printf("\n\n\tCongratulations! You did it.\n\n");
    exit(EXIT_SUCCESS);
    
    return;
}


//=====This function prints the failure report.=====
void sorry (int rand1)
{
    printf("\n\nSorry. The number was %d.", rand1);
    printf("\nBetter luck next time.\n\n");

    return;
}
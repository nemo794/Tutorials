/*
* 
* 20150425-4.c
*
* Created by Sam Niemoeller on 4/25/15
* 
* Stephen's Challenge
*
* Regarding characters, think of them as small unsigned (meaning, non-negative)
* integer values that happen to have additional features. Try adding one to the
* character ‘c’ and print the result (as a character). Interesting, no?
*
* Characters are treated very differently in other languages, but in C,
* you can take fun shortcuts with the whole, “character is a number” thing.
* 
* For example, can you think of a method that took lowercase letters and
* made them uppercase without using ifs, while loops, switches, or for loops?
* Use this chart for reference: http://en.cppreference.com/w/c/language/ascii.
* Does that help answer your larger question about how characters work?
*
* Sam's note -- also tested returning a char from a function via a pointer
* and via the return.
*
*/

#include <stdio.h>

void makeLowerCase (char *stephenCharacter);
char makeUpperCase (char stephenCharacter);

int main ()
{
//Local Definitions
char stephenCharacter='\0';

//Statements
printf ("\nEnter Single Character: ");
scanf ("%c", &stephenCharacter);
printf ("\nYou entered character: %c", stephenCharacter);
printf("\nCharacter + 1 = %c", stephenCharacter+1);

printf("\n\nGenerating upper or lower case version....\n");
if (stephenCharacter>=65 && stephenCharacter<=90)
	makeLowerCase (&stephenCharacter);
else if (stephenCharacter>=97 && stephenCharacter<=122)
	stephenCharacter = makeUpperCase (stephenCharacter);
else
	printf ("\nUnable to make character  Please try again.");

/*
* This statement tests syntax from returning a *char from the makeLowerCase function
* and a char from the makeUpperCase functions.
*/
printf("\nUpper-to-Lower Case Conversation used a pointer.");
printf("\nLower-to-Upper Case Conversation used a returned value.");
printf("\nReturned character value of function (should the altered version): %c\n", stephenCharacter);

	return 0;
}


/*
* This function makes an upper case ASCII decimal character into lower case and prints it.
*/
void makeLowerCase (char *stephenCharacter)
{
*stephenCharacter+=32;
printf("Lower Case version is: %c\n", *stephenCharacter);
	return;
}


/*
* This function makes a lower case ASCII decimal character into Uppercase and prints it.
*/
char makeUpperCase (char stephenCharacter)
{
stephenCharacter-=32;
printf("Upper Case version is: %c\n", stephenCharacter);
	return stephenCharacter;
}
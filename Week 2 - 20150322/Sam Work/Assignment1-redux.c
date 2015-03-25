/*
*  Assignment1.c -- REVISED to blend int and float
*
*
*  Created by Sam Niemoeller on 3/13/15.
*  This program will calculate the total ticket sales
*  after a football game based on ticket price and quantity sold.
*  Ticket prices are standardized, and user inputs # sold.
*/

#include <stdio.h>
#define PriceBox 250.00
#define PriceSideline 100.00
#define PricePremium 50.00
#define PriceGenAdmission 25.00


int main (void)
{
    // Local Definitions
    int QtyBox = 0;
    int QtySideline = 0;
    int QtyPremium = 0;
    int QtyGenAdmission = 0;
    int TotalTix = 0;
    float GrossSales = 0;
    
    // Gather Info on #tix sold
    printf ("\nEnter Number of Box Tickets Sold: ");
    scanf ("%d", &QtyBox);
    printf ("Enter Number of Sideline Tickets Sold: ");
    scanf ("%d", &QtySideline);
    printf ("Enter Number of Premium Tickets Sold: ");
    scanf ("%d", &QtyPremium);
    printf ("Enter Number of General Admission Tickets Sold: ");
    scanf ("%d", &QtyGenAdmission);
    
    //Display Results
    printf ("\n\n%d Box tickets at $%1.0f each were sold for a total of: \t\t$%15.2f", QtyBox, PriceBox, ((float)QtyBox * PriceBox));
    printf ("\n%d Sideline tickets at $%1.0f each were sold for a total of: \t\t$%15.2f", QtySideline, PriceSideline, ((float) QtySideline * PriceSideline));
    printf ("\n%d Premium tickets at $%1.0f each were sold for a total of: \t\t$%15.2f", QtyPremium, PricePremium, ((float)QtyPremium * PricePremium));
    printf ("\n%d General Admission tickets at $%1.0f each were sold for a total of: \t$%15.2f", QtyGenAdmission, PriceGenAdmission, ((float)QtyGenAdmission * PriceGenAdmission));
    
    TotalTix = QtyBox + QtySideline + QtyPremium + QtyGenAdmission;
    GrossSales = ((float)QtyBox * PriceBox) + ((float)QtySideline * PriceSideline) + ((float)QtyPremium * PricePremium) + ((float)QtyGenAdmission * PriceGenAdmission);
    
    printf ("\n\nTotal number of tickets sold:\t\t%d", TotalTix);
    printf ("\nTotal Sale Amount:\t\t\t$%1.2f\n\n", GrossSales);
    
    return 0;
}
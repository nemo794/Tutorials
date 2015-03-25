/**
 *  Assignment1.c
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
    float QtyBox = 0;
    float QtySideline = 0;
    float QtyPremium = 0;
    float QtyGenAdmission = 0;
    float TotalTix = 0;
    float GrossSales = 0;
    
    // Gather Info on #tix sold
    printf ("\nEnter Number of Box Tickets Sold: ");
    scanf ("%f", &QtyBox);
    printf ("Enter Number of Sideline Tickets Sold: ");
    scanf ("%f", &QtySideline);
    printf ("Enter Number of Premium Tickets Sold: ");
    scanf ("%f", &QtyPremium);
    printf ("Enter Number of General Admission Tickets Sold: ");
    scanf ("%f", &QtyGenAdmission);
    
    //Display Results
    printf ("\n\n%1.0f Box tickets at $%1.0f each were sold for a total of: $%1.2f", QtyBox, PriceBox, QtyBox * PriceBox);
    printf ("\n%1.0f Sideline tickets at $%1.0f each were sold for a total of: $%1.2f", QtySideline, PriceSideline, QtySideline * PriceSideline);
    printf ("\n%1.0f Premium tickets at $%1.0f each were sold for a total of: $%1.2f", QtyPremium, PricePremium, QtyPremium * PricePremium);
    printf ("\n%1.0f General Admission tickets at $%1.0f each were sold for a total of: $%1.2f", QtyGenAdmission, PriceGenAdmission, QtyGenAdmission * PriceGenAdmission);
    
    TotalTix = QtyBox + QtySideline + QtyPremium + QtyGenAdmission;
    GrossSales = (QtyBox * PriceBox) + (QtySideline * PriceSideline) + (QtyPremium * PricePremium) + (QtyGenAdmission * PriceGenAdmission);
    
    printf ("\n\nTotal number of tickets sold:\t\t%1.0f", TotalTix);
    printf ("\nTotal Sale Amount:\t\t\t$%1.2f\n\n", GrossSales);
    
    return 0;
}
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void)
{


    long card;
    do
    {
        card = get_long("Number: ");
    }
    while (card < 0); //340000000000000 || card > 349999999999999) && (card < 370000000000000 || card > 379999999999999) && (card < 5100000000000000 || card > 5599999999999999) && (card < 4000000000000 || card > 4999999999999) && (card < 4000000000000000 || card > 4999999999999999) );


    if (((card >= 340000000000000 && card <= 349999999999999) || (card >= 370000000000000 && card <= 379999999999999)) && ( card % 10 == 0))
    {
        printf("AMEX\n");
    }
    else if ((card >= 5100000000000000 && card <= 5599999999999999) && ( card % 10 == 0))
    {
        printf("MASTERCARD\n");
    }
    else if (((card >= 4000000000000 && card <= 4999999999999) || (card >= 4000000000000000 && card <= 4999999999999999)) && ( card % 10 == 0))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
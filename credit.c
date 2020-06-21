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
    while (card < 1 || card > 9999999999999999);


    long long temp_num = card ;
    int rem = 0 ;
    int count = 0 ;
    int sum_a = 0 ;
    int sum_b = 0 ;


    while (card >= 0)
    {
        rem = card % 10 ;
        count++ ;
        temp_num = (card - rem) / 10 ;
        break ;


        for (count = 0 ; count % 2 == 0 ; count++)
        {
            sum_a = sum_a + ((card % 10) * 2) ;

            while ((card % 10) * 2 >= 10)
            {
                sum_a = (sum_a % 10) + 1 ;
            } 
        }

        for (count = 0 ; count % 2 != 0 ; count++)
        {
            sum_b = sum_b + rem ;
        }

        return sum_a ;
        return sum_b ;
        return count ;
    }

    // Checking the validity of the number according to Luhn's algorithm

    int total_sum = sum_a + sum_b ;

    if (total_sum % 10 != 0)
    {
       printf("This is an invalid number.\n") ; 
    }
    
    
    
    
    
    




    {
        card = card %10 ;
    }

    if ((card >= 340000000000000 && card <= 349999999999999) || (card >= 370000000000000 && card <= 379999999999999))
    {
        printf("AMEX\n");
    }
    else if (card >= 5100000000000000 && card <= 5599999999999999)
    {
        printf("MASTERCARD\n");
    }
    else if ((card >= 4000000000000 && card <= 4999999999999) || (card >= 4000000000000000 && card <= 4999999999999999))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}


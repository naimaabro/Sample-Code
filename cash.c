#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollar;
    do
    {
        dollar = get_float("Change Owed : ");

    }

    while (dollar < 0);

    int cents = round(dollar * 100);

    int quarters = 25, dimes = 10, nickels = 5, pennies = 1;


  printf("%.2f dollar contains %i cents \n", dollar, cents);


    if (cents % quarters == 00)
printf ("%i\n", cents/quarters);

else if (cents%quarters != 0 && (cents%quarters)%dimes == 0)
printf ("%i\n", (cents/quarters) + ((cents%quarters)/dimes) );

else if ((cents%quarters)%dimes != 0 && ((cents%quarters)%dimes)%nickels == 0)
printf ("%i\n", (cents/quarters) + ((cents%quarters)/dimes) + (((cents%quarters)%dimes)/nickels));


else if (((cents%quarters)%dimes)%nickels != 0 && (((cents%quarters)%dimes)%nickels)%pennies == 0)
printf ("%i\n", (cents/quarters) + ((cents%quarters)/dimes) + (((cents%quarters)%dimes)/nickels) + (((cents%quarters)%dimes)%nickels)/pennies);
}

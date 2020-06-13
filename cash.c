#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollar;
    do
    {
    dollar=get_float("Change Owed : ");

    }

    while (dollar<0);

    int cents = round(dollar * 10);

    int quarters=25, dimes=10, nickels=5, pennies=1;

   // int cq = cents/quarters, dq = cents/dimes, nq = nickels/quarters, pq = pennies/quarters;
      int cq = cents/quarters;

 //   int cqr = cents%quarters, dqr = cents%dimes, nqr = nickels%quarters, pqr = pennies%quarters;

      int cqr = cents%quarters, qdr = quarters%dimes, dnr = dimes%nickels, npr = nickels%pennies;
int cqrd = cqr%dimes, cqrdn =cqrd%nickels;

//if(cents % quarters == 0)
{
    if (cqr == 0)
    printf("Total %i \n" , cq);

    else if (cqr != 0)
    printf (" %i \n" , cqr );

    else if (cqr%dimes == 0)
    printf (" %i \n" , cqr+(cqr/dimes) );

    else if (cqr%dimes != 0)
    printf (" %i \n " , cqr%dimes);

    else if (cqrd%nickels == 0)
    printf ( "%i" , cqrd/nickels);

    else if (cqrd%nickels != 0)
    printf (" %i \n " , cqrd%nickels);


    else if (cqrdn%pennies == 0)
    printf ( "%i" , cqrdn/pennies);

    else if (cqrdn%pennies != 0)
    printf (" %i \n " , cqrd%pennies);
}


//    else if (cqr/nickels == 0)
//    printf ("mmmmmmm");

//    else if (cqr/pennies == 0)
//    printf ("kgjkjr");
 //   else if (cqr == 0)
   // printf ("hee %i \n" , cents/nickels );


}
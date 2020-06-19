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

    int cents = round(dollar * 100);

    int quarters=25, dimes=10, nickels=5, pennies=1;



  printf("%.2f dollar contains %i cents \n" , dollar , cents);


if (cents%quarters == 00)
printf ("%i\n", cents/quarters);

else if (cents%quarters != 0 && (cents%quarters)%dimes == 0)
printf ("%i\n", (cents/quarters) + ((cents%quarters)/dimes) );

else if ((cents%quarters)%dimes != 0 && ((cents%quarters)%dimes)%nickels == 0)
printf ("%i\n", (cents/quarters) + ((cents%quarters)/dimes) + (((cents%quarters)%dimes)/nickels));


else if (((cents%quarters)%dimes)%nickels != 0 && (((cents%quarters)%dimes)%nickels)%pennies == 0)
printf ("%i\n", (cents/quarters) + ((cents%quarters)/dimes) + (((cents%quarters)%dimes)/nickels) + (((cents%quarters)%dimes)%nickels)/pennies);



}












//#include <cs50.h>
//#include <stdio.h>
//#include <math.h>

//int main(void)
//{
//    float dollar;
//    do
//    {
//    dollar=get_float("Change Owed : ");

//    }

//    while (dollar<0);

//    int cents = round(dollar * 100);

//    int quarters=25, dimes=10, nickels=5, pennies=1;


//     int cq = cents/quarters;


// int cqr = cents%quarters, cqrd = cqr%dimes, cqrdn =cqrd%nickels;

//    //  int a = cqr+(cqr/dimes)+(cqrd/nickels)+(cqrdn/pennies);

//  printf("%.2f dollar contains %i cents \n" , dollar , cents);

//{
//    if (cents%quarters == 0)
//    printf(" %i \n" , cq);

//    else if (cqr != 0 || cqr%dimes == 0)
//  //printf (" %i \n" , cq+ );

//    //else if (cqr%dimes == 0)
//   printf (" %i \n" , cqr + cqr/dimes);

//    else if (cqr%dimes != 0 || cqrd%nickels == 0)
//  //   printf (" %i \n " , cqr%dimes);

//   // else if (cqrd%nickels == 0)
//    printf ( "%i \n" , cqr + cqr/dimes + cqrd/nickels);

// else if (cqrd%nickels != 0 || cqrdn%pennies == 0)
// //   printf (" %i \n " , cqrd%nickels);


//   // else if (cqrdn%pennies == 0)
//    printf ( "%i \n" , cqr+ cqr/dimes + cqrd/nickels + cqrdn/pennies );

//    else if (cqrdn%pennies != 0)
//    printf (" %i \n " , cqrd%pennies);
//   // printf (" \n khfwlk");
//}




//}
























//#include <cs50.h>
// #include <stdio.h>
//#include <math.h>

//int main(void)
//{
//    float dollar;
//    do
//    {
//    dollar=get_float("Change Owed : ");
//
//    }
//
//    while (dollar<0 && dollar>9);
//
//    int cents = round(dollar * 100);
//
//    int quarters=25, dimes=10, nickels=5, pennies=1;
//
//
//      int cq = cents/quarters;
//
//      int cqr = cents%quarters, cqrd = cqr%dimes, cqrdn =cqrd%nickels;

// printf("%.2f dollar contains %i cents \n" , dollar , cents);
//
//{
//    if (cqr == 0)
//    printf(" %i \n" , cq);
//
//    else if (cqr != 0 && cqr%dimes == 0)
//    //printf (" %i \n" , cqr );

//    //else if (cqr%dimes == 0)
//    printf (" %i \n" , cqr+(cqr/dimes) );

//    else if (cqr%dimes != 0 && cqrd%nickels == 0)
//   //   printf (" %i \n " , cqr%dimes);

//   // else if (cqrd%nickels == 0)
//    printf ( "%i \n" , cqr+(cqr/dimes)+(cqrd/nickels));

//    else if (cqrd%nickels != 0 && cqrdn%pennies == 0)
//   //   printf (" %i \n " , cqrd%nickels);


//   // else if (cqrdn%pennies == 0)
//    printf ( "%i \n" , cqr+(cqr/dimes)+(cqrd/nickels)+(cqrdn/pennies));

//    else if (cqrdn%pennies != 0)
//    printf (" %i \n " , cqrd%pennies);
//}

//}

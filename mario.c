#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
    n=get_int("Height : "); //takes user's input for height of the stairs(pyramid) in integer
    }
    while (n<1 || n>8); //restricts user's input from 1 to 8 rows (no: of stairs in pyramid)

    for(int i=1; i<=n; i++) //loop creates height of the pyramid
    {

        {
        for(int k=(i+1); k<=n ; k++) //loop aligns the stairs/pyramid to the right side
        {
            printf(" ");
        }
        }

        for(int j=0; j<i; j++)      //loop creates width/stairs of the pyramid
        {
        printf("#");                          //blocks of pyramid are printed
        }
    printf("\n");
    }

}
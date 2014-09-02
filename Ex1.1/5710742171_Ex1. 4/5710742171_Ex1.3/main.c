#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    float a,b;
    printf("Enter loan principal (-1 to end):");
    scanf("%f",&a);
    printf("Enter interest rate:");
    scanf("%f",&b);
    printf("Enter term of the loan in days:");
    scanf("%d",&day);
    printf("The interest charge is:$%.2f",a*b*day/365);


    //scanf("")
    return 0;
}

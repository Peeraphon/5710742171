#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter 1 Number");
    scanf("%d",&a);

    if(a%7==0)
    {
        printf("divisibly");
    }
    if(a%7>0)
    {
        printf("not divisibly");

    }


    return 0;
}

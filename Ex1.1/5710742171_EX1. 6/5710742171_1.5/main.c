#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Enter 3 Number");
    scanf("%f %f %f",&a,&b,&c);
    printf("%0.3f",(a+b+c)/3);
    return 0;
}

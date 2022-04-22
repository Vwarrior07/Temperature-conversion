#include <stdio.h>
int main()
{
    float a,b;
    printf("please enter the temprature in F: ");
    scanf("%f",&a);
    b=(a-32)*5/9;
    printf("temprature in c: %f ",b);
    return 0;
}
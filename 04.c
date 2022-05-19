#include<stdio.h>
int main()
{
    double Fahrenheit,centigrade;
    printf("Enter the temperature of city in Fahrenheit :");
    scanf("%lf",&Fahrenheit);
    centigrade=(5.0/9.0)*(Fahrenheit-32);
    printf("Temperature : %lf",centigrade);
    return 0;
}

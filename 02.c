#include<stdio.h>
int main()
{
    double km,meter,feet,inches,centimeter;
    printf("enter the distance between mirpur to asulia:");
    scanf("%lf",&km);
    meter=km*1000;
    feet=km*3280.8399;
    inches=km*39370.078;
    centimeter=km*100000;
    printf("distance in meter from M to A %.2lf\n",meter);
    printf("distance in feet from M to A %.2lf\n",feet);
    printf("distance in inches from M to A %.2lf\n",inches);
    printf("distance in centimeter from M to A %.2lf\nS",centimeter);
    return 0;
}

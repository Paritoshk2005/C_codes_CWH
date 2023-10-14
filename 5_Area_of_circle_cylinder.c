#include <stdio.h>
int main()
{
    float r;
    float pi = 3.14;
    float Area;
    float Volume, Height;
    printf("Enter the value of the radius of your circle: ");
    scanf("%f", &r);
    Area = pi * r * r;
    printf("The Area of your circle is %f \n", Area);

    printf("Enter the height of cylinder:");
    scanf("%f", &Height);
    Volume = pi * r * r * Height;
    printf("The volume of your cylinder is %f", Volume);
    return 0;
}
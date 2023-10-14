#include<stdio.h>
int main(){
    float celcius,fahrenheit;
    printf("Enter the temp in celcius: ");
    scanf("%f",&celcius);
fahrenheit=(celcius*9/5)+32;
    printf("The temp in Fahrenheit is %f",fahrenheit);
return 0;
}
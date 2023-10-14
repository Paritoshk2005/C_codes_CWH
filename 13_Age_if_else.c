#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age>=18 && age<=50)
    {
        printf("You are an adult and you can drive\n",age);
    }
    else
    {
        printf("Your age is not eligible to drive\n",age);
    }

    
return 0;
}
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%lf",&num);
    
    if(num%97==0)
    {
        printf("The number is divisible by 97",num);
    }
    else{
        printf("The number is not divisible by 97",num);
    }
return 0;
}
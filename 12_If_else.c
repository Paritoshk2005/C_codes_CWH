#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    

    if(a%2==0)
    {
        printf("The number is divisible by 2",a);
    }
    else
    {
        printf("The number is not divisible by 2",a);
    }
return 0;
}
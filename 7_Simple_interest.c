#include<stdio.h>
int main(){
    int principal,rate,years,SI;
    printf("Enter principal: ");
    scanf("%d",&principal);
    printf("Enter Rate: ");
    scanf("%d",&rate);
    printf("Enter Years: ");
    scanf("%d",&years);
SI=(principal*rate*years)/100;
    printf("The SI=%d",SI);
return 0;
}
#include<stdio.h>
int main(){
    float income;
    float tax=0;

    printf("Enter your yearly income in Lakhs:\n");
    scanf("%f",&income);

    if(income>=250000 && income<=500000){
        tax=tax+0.05*(income-250000);
        printf("You have to pay %f tax",tax);
    }
    else if(income>=500000 && income<=1000000){
        tax=tax+0.20*(income-500000);
        printf("You have to pay %f tax",tax);
    }
    else if (income>=1000000){
        tax=tax+0.30*(income-1000000);
        printf("You have to pay %f tax",tax);
    }
    else{
        printf("You dont have to pay tax",tax);
    }
return 0;
}
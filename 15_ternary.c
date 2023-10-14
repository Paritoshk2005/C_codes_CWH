#include<stdio.h>
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);

    // one liner if statement
    (a<5)? printf("The number is less than 5") : printf("The number is not less than 5");
return 0;
}
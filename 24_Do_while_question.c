#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    do {
        printf("The number is:%d\n",i+1);
        i++;
    }while(i<n);
return 0;
}
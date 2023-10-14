#include<stdio.h>
int main(){
    int i,sum=0,n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        sum+=i;
    }
    printf("The value of sum(t to 10) is %d",sum);
return 0;
}
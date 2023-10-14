#include<stdio.h>
int main(){
    // this is not the best method to solve a problem
    int n=3,i,prime=1;
    
    for(i=2;i<n;i++){
        if(n%1==0){
            prime=0;
            break;
        }
    }
    if(prime=0 && n!=2){
        printf("This is not a prime number ");
    }
    else{
        printf("This is a prime number");
    }
return 0;
}
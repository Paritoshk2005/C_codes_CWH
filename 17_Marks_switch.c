#include<stdio.h>
int main(){
    int marks,maths,physics,chemistry;
    float total;
    printf("Enter your marks in maths:");
    scanf("%d",&maths);
    printf("Enter your marks in chemistry:");
    scanf("%d",&chemistry);
    printf("Enter your marks in physics:");
    scanf("%d",&physics);

    total=(physics+maths+chemistry)/3;

    if((total<40) || maths<33 || chemistry<33 || physics<33){
        printf("Your perfcentage is %.2f and you are failed",total);
    }
    else{
        printf("Your perfcentage is %.2f and you are passed",total);
    }
return 0;
}
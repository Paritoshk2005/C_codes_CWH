#include<stdio.h>
int main(){
    int length,breadth,Area;

    printf("What is the length of your rectangle?: \n");
    scanf("%d",&length);
    printf("What is the breadth of your rectangle?: \n");
    scanf("%d",&breadth);

Area=length*breadth;
    printf("The Area of your rectangle is %d",Area);
return 0;
}
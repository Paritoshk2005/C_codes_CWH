#include<stdio.h>
int main(){
    // Ascii value of lower case alphabets is 97-122
    char ch;
    printf("Enter your Character:");
    scanf("%c",&ch);
    if(ch>=97 && ch<=127){
        printf("This is lower case character");
    }
    else{
        printf("This is not lower case character");
    }
return 0;
}
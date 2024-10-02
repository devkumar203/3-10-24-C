#include<stdio.h>
/*
C program to find the greatest number among three number
*/
int main(){
    int a, b, c;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);
    if((a > b) && (a > c)){
        printf("Greatest number is: %d\n", a);
    }else if(b > c){
        printf("Greatest number is: %d\n", b);
    }else
      printf("Greatest number is: %d\n", c);
}

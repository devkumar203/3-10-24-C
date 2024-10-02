#include<stdio.h>
//Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
int main(){
int m, n = 1;
printf("Enter the value of ");
scanf("%d", &m);

if(m > 0){
    printf("The value of n = %d", n);
}else if(m == 0){
    printf("The value of n = %d", --n);
}else if(m < 0){
    n = --n;
    printf("The value of n = %d",--n);
}
return 0;
}
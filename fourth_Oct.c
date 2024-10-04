//Program to check vowel or consonant

#include<stdio.h>

int main(){
/*
char ch;
printf("Enter the alphabet");
scanf("%c", &ch);
if( ch = 'a'  || ch = 'e' || ch = 'i' ch = 'o' ch = 'u'){
    printf("Vowel");
}else
printf("Consonant");
*/

//C program to check wheather the triange is valid or not if angles are given
int a, b, c;
printf("Enter the first side of the triangle:");
scanf("%d", &a);
printf("Enter the second side of the triangle:");
scanf("%d", &b);
printf("Enter the third side of the triangle:");
scanf("%d", &c);
if((a+b+c) <=180){
    printf("Valid Triangle.");
}else
printf("Non Valid Triangle");
return 0;
}

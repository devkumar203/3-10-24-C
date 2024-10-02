#include<stdio.h>
/*Write a C program to check whether a character is an alphabet, digit or special character.
TEST DATA:
@

EXPECTED OUTPUT:
This is a special character.
*/
int main(){
char ch;
printf("Enter to check whether a character is an alphabet, digit or special character.");
scanf("%c",&ch);
if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
    printf("This is an alphabet.");
}else if(ch >= 0 && ch <=9){
    printf("This is a digit.");
}else
    printf("This is a special character.");
}
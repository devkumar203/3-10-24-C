#include<stdio.h>
/*program to check sign of given number
Input: 5
Output: No. is positive
*/

int main(){
    int num;
    printf("Enter the number with to check the sighn -ve or postive or zero:");
    scanf("%d", &num);
    
    if(num < 0){
        printf("Entered number is -ve number.");
    }else if(num == 0){
        printf("Entered number is zero(0).");
    }else
        printf("Entered number is +ve number.");
}
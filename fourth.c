#include<stdio.h>
/*Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:

Temp < 0 then Freezing weather
Temp 0 - 10 the Very Cold weather 
Temp 10 - 20 then Cold weather
Temp 20 - 30 then Normal in Temp
Temp 30 - 40 then its Vey Hot

Test Data:
42

Expected Output:
Its very hot
*/
int main(){
    int temp;
    printf("Enter the temperature in centigrade:");
    scanf("%d", temp);

    if(temp < 0){
        printf("Freezing weather.");
    }else if(temp <=10){
        printf("the Very Cold weather");
    }else if(temp <= 20){
        printf("Cold weather");
    }else if(temp <= 30){
        printf("Normal weather.");
    }else 
        printf("Very Hot");
}

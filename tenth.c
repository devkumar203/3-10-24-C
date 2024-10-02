#include<stdio.h>
//Check wheather the triangle is equilateral, scalene, or isoceles
int main(){
int side1, side2, side3;
printf("Enter the lenth of side of the triangle:");
scanf("%d%d%d", &side1, &side2, &side3);
if(side1 == side2 && side2 == side3){
    printf("Equilateral Triangle.");
}else if(side1 == side2 || side2 == side3 || side1 == side3){
    printf("Isoceles Triangle.");
}else
    printf("Scalene Triangel.");
}
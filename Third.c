#include <stdio.h>
// Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.
/*
INPUT DATA:
Input the Roll Number of the student :754
Input the Name of Student :Avni
Input the marks of Physics, Chemistry and Computer Application 70 80 90
-------

EXPECTED OUTPUT:
Roll no: 754
Name of Student : Avni
Marks in Physics: 70
Marks in Chemistry: 80
Marks in Computer Application: 90
Total Marks  = 240
Percentage = 80.00
Division = First
*/
int main()
{
    int roll, phy, chem, Comp_App;
    char name[50];
    printf("Input the Roll Number of the student :");
    scanf("%d", &roll);

    printf("Input the Name of the Student :");
    scanf("%s", &name);

    printf("Input the marks of Physics, Chemistry and Computer Application: ");
    scanf("%d%d%d", &phy, &chem, &Comp_App);

    int total_marks = (phy + chem + Comp_App);
    float per = ((phy + chem + Comp_App) / 300.0)*100;

    printf("Roll No: %d\n", roll);
    printf("Name of Student: %s\n", name);
    printf("Marks in Physics: %d\n", phy);
    printf("Marks in Chemistry: %d\n", chem);
    printf("Marks in Computer Application: %d\n", Comp_App);
    printf("Percentage:%f\n", per);

    if (per <= 39)
    {
        printf("Third Division.");
    }
    else if (per <= 59)
    {
        printf("Second Division.");
    }
    else
        printf("First Division");
        return 0;
}
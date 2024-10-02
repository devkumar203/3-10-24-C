#include <stdio.h>
// Write a C program to determine eligibility for admission to a professional course based on the following criteria.

/*Eligibility Criteria: Marks in Maths>=65 and Marks in Phy >= 55 and Marks in Chem >= 50 and Total of all three subject >= 100 or Total in Maths and Physics >= 140 __________________
input the marks obtained in Physics :65
input the marks obtained in Chemistry :51
input the marks obtained in Mathematics: 72
Total marks of Maths, Physics and Chemistry :188
Total marks of Maths and Physics: 137 The candidate is not eligible.
*/
int main()
{
    int marks, chem, maths, phy;
    int tot_marks, tot_maths_phy;
    printf("Enter the marks of maths, chemistry and physics:");
    scanf("%d%d%d", &phy, &chem, &maths);
    tot_marks = (maths + chem + phy);
    tot_maths_phy = (maths + phy);
        printf("Total Marks of :%d\n", tot_marks );
        printf("Marks in Maths and physics :%d\n",tot_maths_phy);
    printf("Total Marks :%d\n", tot_marks);
    if (maths >= 65 && phy >= 55 && chem >= 50 && (maths + chem + phy) >= 100 ||(maths + phy) >= 140)
    {
        printf("You are eligible.");
    }
    else
        printf("You are not eligible.");
}
#include <stdio.h>

int main() {
    char grade;

    printf("Enter the Grade (E, V, G, A, F): ");
    scanf("%c", &grade);

    switch (grade) {
        case 'E':
            printf("You have chosen: Excellent\n");
            break;
        case 'V':
            printf("You have chosen: Very good\n");
            break;
        case 'G':
            printf("You have chosen: Good\n");
            break;
        case 'A':
            printf("You have chosen: Average\n");
            break;
        case 'F':
            printf("You have chosen: Fail\n");
            break;
        default:
            printf("Invalid grade entered.\n");
    }

    return 0;
}

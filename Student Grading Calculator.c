/* 
----------------------------------------------------------------
Program: Grade Calculator                                       
Author: Aasher
Language: C
Platform/Compiler: Programiz / GCC / Code::Blocks / Turbo C
Date Created: [01/11/2025]
Description:
This program takes the marks of a student (out of 100) as input 
and determines their grade using if�else if�else statements.
It also validates the input range (0�100) to ensure correctness.
-----------------------------------------------------------------
*/



#include <stdio.h>

int main() {
    float marks;

    printf("Enter your marks out of 100: ");
    scanf("%f", &marks);

    if (marks < 0 || marks > 100)
        printf("INVALID INPUT! Marks must be between 0 and 100.\n");

    else if (marks >= 90 && marks <= 100)
        printf("Your grade is A+ — Brilliant work!\n");

    else if (marks >= 80 && marks < 90)
        printf("Your grade is A — Nice job.\n");

    else if (marks >= 70 && marks < 80)
        printf("Your grade is B — Keep up the good work.\n");

    else if (marks >= 60 && marks < 70)
        printf("Your grade is C — Try your best next time.\n");

    else if (marks >= 50 && marks < 60)
        printf("Your grade is D — You must take studies seriously!\n");

    else
        printf("Your grade is F — You have failed. Bring your parents tomorrow to the Headmaster's office, UNDERSTOOD!!!\n");

    return 0;
}

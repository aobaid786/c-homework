#include <stdio.h>

int main() {
    int n, i, failCount = 0;
    char subject[50];
    float marks, credits;
    float totalCredits = 0, totalGradePoints = 0;
    float gradePoint, cgpa;

    printf("===== CGPA CALCULATOR =====\n");

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        printf("\nEnter Subject Name: ");
        scanf("%s", subject);

        printf("Enter Marks (0-100): ");
        scanf("%f", &marks);

        printf("Enter Credits: ");
        scanf("%f", &credits);

        if(marks >= 90)
            gradePoint = 10;
        else if(marks >= 80)
            gradePoint = 9;
        else if(marks >= 70)
            gradePoint = 8;
        else if(marks >= 60)
            gradePoint = 7;
        else if(marks >= 50)
            gradePoint = 6;
        else if(marks >= 40)
            gradePoint = 5;
        else {
            gradePoint = 0;
            failCount++;

            printf("%s : FAIL\n", subject);
        }

        totalGradePoints += gradePoint * credits;
        totalCredits += credits;
    }

    cgpa = totalGradePoints / totalCredits;

    printf("\n====================");
    printf("\nCGPA = %.2f", cgpa);
    printf("\nFailed Subjects = %d", failCount);

    if(failCount > 0)
        printf("\nResult Status : FAIL");
    else
        printf("\nResult Status : PASS");

    printf("\n====================\n");

    return 0;
}
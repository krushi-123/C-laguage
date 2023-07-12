#include <stdio.h>

int marks[3][3];
int totalMarks[3] = {0};
int maximumMarks = 300;
int calculateTotalMarks(int marks[], int index) 
{
    if (index == 0) {
        return marks[0];
    } else {
        return marks[index] + calculateTotalMarks(marks, index - 1);
    }
}

float calculatePercentage(int totalMarks, int maximumMarks) 
{
    if (maximumMarks == 0) {
        return 0;
    } else {
        return (totalMarks * 100.0) / maximumMarks;
    }
}

int main() 
{

    for (int i = 0; i < 3; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            totalMarks[i] += marks[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        int studentTotalMarks = calculateTotalMarks(marks[i], 2);
        float percentage = calculatePercentage(studentTotalMarks, maximumMarks);
        printf("Total marks for student %d: %d\n", i + 1, studentTotalMarks);
        printf("Percentage for student %d: %.2f%%\n", i + 1, percentage);
    }

    return 0;
}

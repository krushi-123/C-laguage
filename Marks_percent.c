#include <stdio.h>

int TotalMarks(int marks[], int n) 
{
    if (n == 0) 
    {
        return marks[0];
    } 
    else 
    {
        return marks[n] + TotalMarks(marks, n - 1);
    }
}

float Percentage(int totalMarks, int maximumMarks) 
{
    if (maximumMarks == 0) 
    {
        return 0;
    } 
    else 
    {
        return (totalMarks * 100.0) / maximumMarks;
    }
}

int main() 
{
    int marks[3][3];
    int totalMarks[3] = {0};
    int maximumMarks = 300;

    for (int i = 0; i < 3; i++) 
    {
        printf("Enter marks for student %d:\n", i + 1);

        for (int j = 0; j < 3; j++) 
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);

            totalMarks[i] += marks[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        int studentTotalMarks = TotalMarks(marks[i], 2);
        float percentage = Percentage(studentTotalMarks, maximumMarks);
        printf("Total marks for student %d: %d\n", i + 1, studentTotalMarks);
        printf("Percentage for student %d: %.2f%%\n", i + 1, percentage);
    }

    return 0;
}

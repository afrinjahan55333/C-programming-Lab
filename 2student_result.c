#include <stdio.h>
int calculateTotal(int m[]) {
    return m[0] + m[1] + m[2] + m[3] + m[4];
}

float calculateAverage(int total) {
    return total / 5.0;
}
void calculateGrade(float avg) {
    if (avg >= 80) 
        printf("Grade : A+\nGPA : 4.00\n");
    else if (avg >= 70) 
        printf("Grade : A\nGPA : 3.50\n");
    else if (avg >= 60) 
        printf("Grade : A-\nGPA : 3.00\n");
    else if (avg >= 50) 
        printf("Grade : B\nGPA : 2.50\n");
    else if (avg >= 40) 
        printf("Grade : C\nGPA : 2.00\n");
    else 
        printf("Grade : F\nGPA : 0.00\n");
}

void displayResult(char name[], int id, int total, float avg, int fail) {
    printf("\n------ Student Result ------\n");
    printf("Name : %s\n", name);
    printf("ID : %d\n", id);
    printf("Total : %d\n", total);
    printf("Average : %.2f\n", avg);
    calculateGrade(avg);
    if (fail == 1) 
        printf("Result : Fail\n");
    else printf("Result : Pass\n");
}
int main() {
    char name[50];
    int id, marks[5], fail = 0;
    printf("Enter student name: ");
    scanf(" %[^\n]", name);
    printf("Enter student ID: ");
    scanf("%d", &id);
    printf("Enter marks of 5 subjects: ");
    for (int i=0; i<5; i++) {
        scanf("%d", &marks[i]);
        if (marks[i]<0 || marks[i]>100) {
            printf("Invalid marks!\n");
            return 0;
        }
        if (marks[i]<40) 
            fail = 1;
    }
    int total = calculateTotal(marks);
    float avg = calculateAverage(total);
    displayResult(name, id, total, avg, fail);
    return 0;
}
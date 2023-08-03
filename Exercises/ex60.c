#include <stdio.h>

/*
This code reads grades for multiple students, calculates their overall average based on given weights, assigns a letter grade ('A' for average 75 or higher, 'F' otherwise), and prints out the students' ids and their corresponding letter grades.
*/
typedef struct {
    int id;
    int mid1;
    int mid2;
    int final;
    char letter;
} Student;

int main(void) {
    int n;
    scanf("%d", &n);

    Student students[n];
    for(int i = 0; i < n; i++) {
        students[i].id = 1000 + i;
        scanf("%d %d %d", &students[i].mid1, &students[i].mid2, &students[i].final);

        // Calculate average
        float average = students[i].mid1 * 0.3 + students[i].mid2 * 0.3 + students[i].final * 0.4;

        // Assign letter grade based on average
        students[i].letter = (average >= 75) ? 'A' : 'F';
    }

    // Print student IDs and letter grades
    for(int i = 0; i < n; i++) {
        printf("%d: %c\n", students[i].id, students[i].letter);
    }

    return 0;
}

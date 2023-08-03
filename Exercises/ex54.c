#include <stdio.h>
#include <stdlib.h>

/*
This program defines a structure Student to store information about a student, including their ID, midterm grades, final grade, overall grade (out of 4), and a letter grade. It reads grades for two students, calculates their overall and letter grades, and then prints these results. The overall grade is calculated as 30% of each midterm grade plus 40% of the final grade, and this score out of 100 is then converted to a scale out of 4. The letter grade is calculated based on the overall grade, with 4 mapping to 'A', 3 to 'B', 2 to 'C', and 1 to 'D'.
*/


struct Student {
	int id;
	int midterm1Grade;
	int midterm2Grade;
	int finalGrade;
	float overallGradeOverFour;
	char letterGrade;
};

float calculateOverallGrade(struct Student s) {
	return (s.midterm1Grade*0.3f + s.midterm2Grade*0.3f + s.finalGrade*0.4f) / 25.0f;
}

char calculateLetterGrade(float overallGrade) {
	return 'A' + (4 - (int)overallGrade);
}

int main() {
	struct Student s1, s2;

	//set the id's of students
	s1.id = 2014800042;
	s2.id = 2011700321;

	//read their grades
	scanf("%d", &s1.midterm1Grade);
	scanf("%d", &s2.midterm1Grade);
	scanf("%d", &s1.midterm2Grade);
	scanf("%d", &s2.midterm2Grade);
	scanf("%d", &s1.finalGrade);
	scanf("%d", &s2.finalGrade);

	//calculate their overall grades (over 4.0)
	s1.overallGradeOverFour = calculateOverallGrade(s1);
	s2.overallGradeOverFour = calculateOverallGrade(s2);

	//calculate their letter grades
	s1.letterGrade = calculateLetterGrade(s1.overallGradeOverFour);
	s2.letterGrade = calculateLetterGrade(s2.overallGradeOverFour);

	//print the results
	printf("%d: %.2f (%c)\n", s1.id, s1.overallGradeOverFour, s1.letterGrade);
	printf("%d: %.2f (%c)\n", s2.id, s2.overallGradeOverFour, s2.letterGrade);

	return 0;
}

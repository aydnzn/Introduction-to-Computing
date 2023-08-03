#include <stdio.h>
#include <stdlib.h>

#define FAMILY_COUNT 3

struct Person {
	int age;
	int salary;
};

struct Family {
	struct Person persons[9];
	int personCount;
};

int oldestInPoorest(struct Family fam[]) {
	int i, j;
	int totalSalary[FAMILY_COUNT];
	for (i = 0; i < FAMILY_COUNT; i++) {
		totalSalary[i] = 0;
		for (j = 0; j < fam[i].personCount; j++) {
			totalSalary[i] += fam[i].persons[j].salary;
		}
	}

	int poorestFamily = 0;
	for (i = 1; i < FAMILY_COUNT; i++) {
		if (totalSalary[i] < totalSalary[poorestFamily]) {
			poorestFamily = i;
		}
	}

	int oldestPersonIndex = 0;
	for (j = 1; j < fam[poorestFamily].personCount; j++) {
		if (fam[poorestFamily].persons[j].salary > fam[poorestFamily].persons[oldestPersonIndex].salary) {
			oldestPersonIndex = j;
		}
	}
	return fam[poorestFamily].persons[oldestPersonIndex].age;
}

int main(void) {
	struct Family families[FAMILY_COUNT];
    // The families should be filled here, otherwise the function oldestInPoorest will work with uninitialized data.

	return 0;
}

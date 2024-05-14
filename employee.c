//employee.c
//Christopher Bowman
//Created Fri 13 Oct 2023
#include "employee.h"
Employee *readData(const char *fileName, int *arraySize) {
	Employee *out;
	FILE *data = fopen(fileName, "r");
	if (data != NULL) {
		*arraySize = 0;
		char buf[MAX_LINE_LENGTH];
		while (fgets(buf, MAX_LINE_LENGTH, data)) {
			(*arraySize)++;
		}
		out = (Employee *) malloc(*arraySize * sizeof(Employee));
		rewind(data);
		int i;
		for (i = 0; i < *arraySize; i++) {
			char line[MAX_LINE_LENGTH];
			if (fgets(line, MAX_LINE_LENGTH, data)) {
				sscanf(line, "%s %d %lf", out[i].name, &(out[i].id), &(out[i].salary));
			}
		}
	} else {
		out = NULL;
	}
	fclose(data);
	return out;
}
Employee getBestEmployee(Employee *arr, int size) {
	int i;
	int maxI = 0;
	for (i = 0; i < size; i++) {
		if (arr[i].salary > arr[maxI].salary) {
			maxI = i;
		}
	}
	Employee myEmployee = arr[maxI];
	return myEmployee;
}
int writeData(char *fileName, Employee e) {
	int out;
	FILE *myOut = fopen(fileName, "w");
	if (myOut != NULL) {
		fprintf(myOut, "%s %d %.0lf\n", e.name, e.id, e.salary);
		out = 0;
	} else {
		out = -1;
	}
	fclose(myOut);
	return out;
}

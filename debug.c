//main.c
//Christopher Bowman
//Created Fri 13 Oct 2023
#include "employee.h"
int main() {
	int myEmployeesSize;
	Employee *myEmployees = readData("a6-input.txt", &myEmployeesSize);
	printf("myEmployees: %p, \tsize: %d, \t%p\n",  myEmployees, myEmployeesSize, NULL);
	int i;
	for (i = 0; i < myEmployeesSize; i++) {
		printf("%s %d %lf\n", myEmployees[i].name, myEmployees[i].id, myEmployees[i].salary);
	}
	writeData("a6-output.txt", getBestEmployee(myEmployees, myEmployeesSize));
	free(myEmployees);
	return 0;
}

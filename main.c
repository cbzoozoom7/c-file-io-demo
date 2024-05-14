//main.c
//Christopher Bowman
//Created Fri 13 Oct 2023
#include "employee.h"
int main() {
	int myEmployeesSize;
	Employee *myEmployees = readData("a6-input.txt", &myEmployeesSize);
	writeData("a6-output.txt", getBestEmployee(myEmployees, myEmployeesSize));
	free(myEmployees);
	return 0;
}

//employee.h
//Christopher Bowman
//Created Fri 13 Oct 2023
#ifndef EMPLOYEE_H
	#define EMPLOYEE_H
	#define MAX_LINE_LENGTH 20
	#include <stdio.h>
	#include <stdlib.h>
	typedef struct STRUCT_EMPLOYEE {
		char name[10 + 1];
		int id;
		double salary;
	} Employee;
	Employee *readData(const char *, int *);
	Employee getBestEmployee(Employee *, int);
	int writeData(char *, Employee);
#endif

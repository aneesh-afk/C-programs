#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_EMPLOYEES 15 

struct Employee {
    char name[21];  
    char gender;    
    int salary;     
    int year, month, day;  
};

int calculateAge(int birthYear, int birthMonth, int birthDay) {
    int year=2024;
    int mon=12;
    int day=17;
    
    int age = year - birthYear;
    if (mon + 1 < birthMonth || (mon + 1 == birthMonth && day < birthDay)) {
        age--; 
    }
    
    return age;
}

// Function to input employee record
void inputEmployee(Employee* emp) {
    printf("Enter Name (max 20 characters): ");
    fgets(emp->name, 21, stdin);
    emp->name[strcspn(emp->name, "\n")] = '\0'; 
    scanf(" %c", &emp->gender);  
    printf("Enter Salary: ");
    scanf("%d", &emp->salary);
    printf("Enter Date of Birth (Year Month Day): ");
    scanf("%d %d %d", &emp->year, &emp->month, &emp->day);
    getchar(); 
}


void displayEmployee(Employee emp) {
    printf("%-20s %-6c %-10d %-4d-%02d-%02d\n", emp.name, emp.gender, emp.salary, emp.year, emp.month, emp.day);
}

int main() {
    Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;
    
    // Input 10 initial employee records
    printf("Enter 10 initial employee records:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        inputEmployee(&employees[employeeCount]);
        employeeCount++;
    }
    
    // Input 5 amendments (add, update salary, or mark as retired)
    printf("\nEnter 5 amendments (new employees, salary update, or retire employees):\n");
    for (int i = 0; i < 5; i++) {
        Employee amendment;
        printf("Enter details for amendment %d:\n", i + 1);
        inputEmployee(&amendment);
        
        // Check if the employee already exists in the list by name
        int found = 0;
        for (int j = 0; j < employeeCount; j++) {
            if (strcmp(employees[j].name, amendment.name) == 0) {
                // Employee exists, update salary or retire
                if (amendment.salary == 0) {
                    employees[j].salary = 0;  
                } else {
                    employees[j].salary = amendment.salary;  
                }
                found = 1;
                break;
            }
        }

        if (!found) {
            if (employeeCount < MAX_EMPLOYEES) {
                employees[employeeCount++] = amendment;
            } else {
                printf("Maximum employee limit reached!\n");
            }
        }
    }

   
    printf("\nEmployees after removing those who are 60 or older:\n");
    for (int i = 0; i < employeeCount; i++) {
        int age = calculateAge(employees[i].year, employees[i].month, employees[i].day);
        if (age >= 60) {
            employees[i].salary = 0;
                   }
    }

    // Display the final employee records
    printf("\nFinal list of employees:\n");
    printf("%-20s %-6s %-10s %-15s\n", "Name", "Gender", "Salary", "Date of Birth");
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].salary != 0) {  
            displayEmployee(employees[i]);
        }
    }

    return 0;
}

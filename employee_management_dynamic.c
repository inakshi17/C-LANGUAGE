#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    char dept[50];
    float salary;
};

void displayHighEarners(struct Employee emp[], int n, float threshold) {
    int found = 0;
    printf("\nEmployees earning more than %.2f:\n", threshold);
    for (int i = 0; i < n; i++) {
        if (emp[i].salary > threshold) {
            printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n", 
                    emp[i].id, emp[i].name, emp[i].dept, emp[i].salary);
            found = 1;
        }
    }
    if (!found) printf("No employees found in this range.\n");
}
void searchByID(struct Employee emp[], int n, int searchID) {
    for (int i = 0; i < n; i++) {
        if (emp[i].id == searchID) {
            printf("\nEmployee Found:\n");
            printf("Name: %s\nDept: %s\nSalary: %.2f\n", 
                    emp[i].name, emp[i].dept, emp[i].salary);
            return;
        }
    }
    printf("\nEmployee with ID %d not found.\n", searchID);
}

int main(){
    int n, searchID;
    float threshold;
    struct Employee *emp;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    emp = (struct Employee*)malloc(n * sizeof(struct Employee));
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf(" %[^\n]s", emp[i].name);
        printf("Department: ");
        scanf(" %[^\n]s", emp[i].dept);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\nEnter salary threshold to filter: ");
    scanf("%f", &threshold);
    displayHighEarners(emp, n, threshold);
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchID);
    searchByID(emp, n, searchID);

    free(emp);
    return 0;
}

#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
};
int main() {
struct Employee emp[5];
int i, max = 0;
float totalAge = 0;
printf("Enter details of 5 employees:\n");
for (i=0;i<5;i++) {
    printf("\nEmployee %d:\n", i + 1);
    printf("Enter ID: ");
    scanf("%d", &emp[i].id);
    printf("Enter Name: ");
    scanf("%s", emp[i].name);
    printf("Enter Age: ");
    scanf("%d", &emp[i].age);
    printf("Enter Salary: ");
    scanf("%f", &emp[i].salary);
        if (emp[i].salary > emp[max].salary) {
            max=i;
        }
        totalAge=totalAge+emp[i].age;
    }
float averageAge=totalAge / 5.0;
printf("\n----------------------------------------------\n");
printf("Employee With Highest Salary:\n");
printf("ID: %d\n", emp[max].id);
printf("Name: %s\n", emp[max].name);
printf("Age: %d\n", emp[max].age);
printf("Salary: %.2f\n", emp[max].salary);
printf("\nAverage Age of Employees: %.2f\n", averageAge);
printf("\nAll Employee Details:\n");
printf("----------------------------------------------\n");
for(i=0;i<5;i++) {
    printf("Employee %d\n", i + 1);
    printf("ID      : %d\n", emp[i].id);
    printf("Name    : %s\n", emp[i].name);
    printf("Age     : %d\n", emp[i].age);
    printf("Salary  : %.2f\n", emp[i].salary);
    printf("----------------------------------------------\n");
    }
return 0;
}

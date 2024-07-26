#include <stdio.h>

int main() {
    char id[11]; 
    int hours;
    float hourly_rate, salary;

    printf("Input the Employees ID (Max. 10 chars): ");
    scanf("%10s", id); 
    printf("Input the working hrs: ");
    scanf("%d", &hours);
    printf("Salary amount/hr: ");
    scanf("%f", &hourly_rate);

    salary = hours * hourly_rate;

    printf("Employees ID = %s\n", id);
    printf("Salary = U$ %.2f\n", salary); 

    return 0;
}

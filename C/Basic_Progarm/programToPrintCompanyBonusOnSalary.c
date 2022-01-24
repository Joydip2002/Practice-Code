#include <stdio.h>
#include <conio.h>
int main()
{
    long int salary, total;
    float bonous;
    printf("Enter Company Salary:\n");
    scanf("%d", &salary);
    if (salary > 15000)
    {
        bonous = salary * 0.05;
        total = salary + bonous;
        printf("Total Salary Is: %d", total);
    }
    else if (salary >= 10000)
    {
        bonous = salary * 0.02;
        total = salary + bonous;
        printf("Total Salary Is: %d", total);
    }
    else
    {
        printf("No Bonous");
    }
}
#include <stdio.h>
#include <conio.h>
int main()
{
    int n1, n2, sum = 0;
    printf("Enter n1 Number: ");
    scanf("%d", &n1);
    printf("Enter n2 Number: ");
    scanf("%d", &n2);
    for (int i = n1; i <= n2; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("Sum of Integer divisible By 2 Between Two Numbers Is: %d", sum);
}
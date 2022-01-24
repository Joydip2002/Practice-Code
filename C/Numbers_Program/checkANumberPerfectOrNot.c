#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter A Number: ");
    scanf("%d", &n);
    // int temp = n;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("%d is perfect Number", n);
    }
    else
    {
        printf("%d is Not perfect Number", n);
    }
}
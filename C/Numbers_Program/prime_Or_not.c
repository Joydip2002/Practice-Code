#include <stdio.h>
#include <conio.h>

int main()
{
    int n, flag = 1;
    printf("Enter a Number:");
    scanf("%d", &n);
    // if (n == 1 || n == 0)
    // {
    //     printf("Prime Number");
    // }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
}
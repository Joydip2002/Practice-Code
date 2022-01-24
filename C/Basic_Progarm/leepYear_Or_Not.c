#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter Year: \n");
    scanf("%d", &n);
    if (n % 400 == 0)
    {
        printf("Leep Year");
    }
    else if (n % 100 == 0)
    {
        printf("'Not Leep Year'");
    }
    else if (n % 4 == 0)
    {
        printf("'Leep Year'");
    }
    else
    {
        printf("Not Leep Year");
    }
}
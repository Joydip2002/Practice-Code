#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2;
    printf("Enter first Number:");
    scanf("%d", &n1);
    printf("Enter last Number:");
    scanf("%d", &n2);
    for (int i = n1; i < n2; i++)
    {
        int flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0){
        printf("%d ",i);
        }
    }
    
}
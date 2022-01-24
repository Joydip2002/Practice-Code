#include <stdio.h>
#include <conio.h>
int main()
{
    int n,rev,temp = 0;
    printf("Enter Number:\n");
    scanf("%d",&n);
    int ptr = n;
    while (n > 0)
    {
        rev =n % 10;
        temp = temp * 10 + rev;
        n /= 10;
    }
    if (ptr == temp)
    {
        printf("%d Is a Palindrome Number",ptr);
    }
    else{
        printf("%d Is a  Not Palindrome Number",ptr);
    }
}
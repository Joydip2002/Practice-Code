#include<stdio.h>
#include<conio.h>
int main(){
    int n,rev,temp = 0;
    printf("Enter Number:\n");
    scanf("%d",&n);
    while (n > 0)
    {
        rev = n % 10;
        temp = temp * 10 + rev;
        n /= 10;
    }
    printf("Reverse number Is: %d",temp);
}
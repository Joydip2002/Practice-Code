#include<stdio.h>
#include<conio.h>

int main(){
    int n, fact = 1;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("Factorial Number Is: \n");
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("%d",fact);
}
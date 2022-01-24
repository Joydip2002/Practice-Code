#include<stdio.h>
#include<conio.h>
int main(){
    int n,temp,sum = 0;
    printf("Enter number:\n");
    scanf("%d",&n);
    while (n > 0)
    {
        temp = n % 10;
        sum += temp;
        n = n / 10;
    }
    printf("Sum of Entire Number: %d",sum);
}
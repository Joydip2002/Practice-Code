#include<stdio.h>
#include<conio.h>
int main(){
    int n,sum = 0;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("Sum Of %d Numbers Is:\n",n);
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("%d",sum);
}
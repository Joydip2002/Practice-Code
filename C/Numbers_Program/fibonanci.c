#include<stdio.h>
#include<conio.h>

int main(){
    int first = 0,second = 1,third;
    int n;
    printf("Enter Number:\n");
    scanf("%d",&n);
    printf("%d ",first);
    printf("%d ",second);
    for (int i = 2; i < n; i++)
    {
        third = first + second;
        first = second;
        second = third; 
        printf("%d ",third);
    }
}
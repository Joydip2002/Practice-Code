#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    printf("Enter value of a:\n");
    scanf("%d",&a);
    printf("Enter value of b:\n");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d\nb = %d",a,b);
}
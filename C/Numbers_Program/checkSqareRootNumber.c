#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int i,n;
    printf("Enter A Number: ");
    scanf("%d",&n);
    if (n == sqrt(n) * sqrt(n))
    {
        printf("%d Is a Square Root Number",n);
    }
    else{
        printf("%d Is Not A Square Root Number",n);
    }
    
}
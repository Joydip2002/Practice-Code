#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n,p = 0,rev,rem = 0;
    printf("Enter Number: ");
    scanf("%d",&n);
    int temp = n;
    int count = 0;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    temp = n;
    
    while (n > 0)
    {
        rem = n % 10;
        rev = rev + pow(rem,count);
        n /= 10;
    }
    if (temp == rev)
    {
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }
    
}
#include<stdio.h>
#include<conio.h>

int main(){
    int num,i,sum = 0,rem,rem1,rev = 0;
    printf("Enter A Number: ");
    scanf("%d",&num);
    int temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    
    printf("%d",sum);
    int store = sum;
    while (sum > 0)
    {
        rem1 = sum % 10;
        rev = rev * 10 + rem1;
       sum /= 10;
    }

     printf("\n%d",rev);
     int store2 = rev;

    if (store * store2 == temp)
    {
        printf("\n %d is A Magic Number",temp);
    }
    else{
          printf("\n%d is Not A Magic Number",temp);
    }
    
}
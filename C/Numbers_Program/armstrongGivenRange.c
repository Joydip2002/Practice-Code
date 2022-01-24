#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int i,rem,temp1,num,temp2,sum = 0;
    printf("Enter Last Range Number: ");
    scanf("%d",&num);
    for (i = 1; i < num; i++)
    {
        sum = 0;
        temp1 = i;
        temp2 = i;
        while (temp1> 0)
        {
            rem = temp1 % 10;
            sum += pow(rem,3);
            temp1 /= 10;
        }
        if (sum == temp2)
        {
            printf("%d ",sum);
        }
        
    }
    
}
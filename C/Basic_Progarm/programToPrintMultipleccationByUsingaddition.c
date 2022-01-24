#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,mul = 0;
    printf("Enter Numbers: ");
    scanf("%d%d",&a,&b);
    if(b >= 0){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if (a >= 0)
    {
        for (int i = 0; i < a; i++)
        {
            mul = mul + b;
        }
        printf("Multiplecation by addition : %d",mul);
    }
    if (a < 0)
    {
        for (int i = a; i < -1; i++)
        {
            mul = mul - b;
        }
          printf("Multiplecation by addition : %d",mul);
    }
    
    
}
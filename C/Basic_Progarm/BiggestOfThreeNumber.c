#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter Three Number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b && a > c){
       printf("%d is bigger Number",a);
    }
    else if (b > a && b > c)
    {
        printf("%d is bigger Number",b);
    }
    else{
        printf("%d is bigger Number",c);
    }
    return 0;
}
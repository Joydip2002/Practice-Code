#include<stdio.h>
#include<conio.h>
int main(){
    int x,y;
    printf("Enter two Numbers:\n");
    scanf("%d%d",&x,&y);
    int c;
    c = x;
    x = y;
    y = c;
    printf("After swapping: \nx = %d\ny =%d",x,y);
}
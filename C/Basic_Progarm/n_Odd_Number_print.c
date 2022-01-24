#include<stdio.h>
#include<conio.h>
int main(){
    int i,n;
    printf("Enter Last Range :\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ",i);
        }
        
    }
    
}
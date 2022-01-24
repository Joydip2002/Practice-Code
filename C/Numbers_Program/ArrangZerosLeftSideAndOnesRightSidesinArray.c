#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int n,i,j;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Arrays Elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if (!(arr[i] == 0 || arr[i] == 1))
        {
            printf("Please Enter '0' or '1' Number");
            exit(0);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }   
        } 
    }
    printf("Output Is: \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
}
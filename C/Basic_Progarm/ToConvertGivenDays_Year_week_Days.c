#include<stdio.h>
#include<conio.h>
int main(){
    int days;
    printf("Enter Days:");
    scanf("%d",&days);
    int year = days / 365;
    printf("Year Is: %d\n",year);
    int weeks = (days % 365)/7;
    printf("Weeks Is: %d\n",weeks);
    int day = (days % 365)%7;
      printf("Days Is: %d",day);
}
#include<stdio.h>
int main()
{
int dec,temp,i,j=1,binary=0;
printf("Enter a numer to convert to binary number\n");
scanf("%d",&dec);
temp=dec;
while(temp!=0)
{
i=temp%2;
binary=binary+(i*j);
temp=temp/2;
j=j*10;

}
printf("Binary number of %d is %d\n",dec,binary);

}
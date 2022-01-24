#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 5
int queue_Arr[max];
int front = 0;
int rare = 0;
int p = 0;
void enqueueElement(int d)
{

    if (rare == max)
    {
        printf("\n.....Queue Overflow......\n");
    }
    else
    {
        queue_Arr[rare] = d;
        p = rare++;
    }
}
void dequeuElement()
{
    if (front == rare)
    {
        printf("...Queue Overflow....\n");
    }
    else
    {
        front++;
    }
}
void frontElement()
{
    if (rare == 0 && front == 0)
    {
        printf("Queue underflow");
    }
    printf("Front Element In Queue is: %d", queue_Arr[front]);
}
void rareElement()
{
    if (rare == 0 && front == 0)
    {
        printf("Queue underflow");
    }
    printf("\nQueue Rare Element Is:%d\n", queue_Arr[p]);
}
void countelement()
{
    int count = 0;
    for (int i = front; i < rare; i++)
    {
        count++;
    }
    printf("\nTotal Queue Element Is: %d\n", count);
}
int searching(int se)
{
    for (int i = front; i < rare; i++)
    {
        if (queue_Arr[i] == se)
            return 1;
    }
    return 0;
}
void display()
{
    int i;
    if (rare == 0 && front == 0)
        printf("\nQueue is Empty!!!");
    else
    {
        printf("\nQueue elements are:\n");
        for (i = front; i < rare; i++)
            printf("%d  ", queue_Arr[i]);
    }
    printf("\n");
}
int main()
{
    while (1)
    {
        int choice;
        printf("\n1.Enqueue\n2.Dequeue\n3.FrontElement\n4.Rare Element\n5.Count Element\n6.Searching Element\n7.Display\n8.Exit\n");
        printf("\nEnter Your Choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            int n;
            printf("\nEnter Enqueue Element: ");
            scanf("%d", &n);
            enqueueElement(n);
            break;
        case 2:
            dequeuElement();
            break;
        case 3:
            frontElement();
            break;
        case 4:
            rareElement();
            break;
        case 5:
            countelement();
        case 6:
            int m;
            printf("Enter Search Number: ");
            scanf("%d", &m);
            if (searching(m) == 1)
            {
                printf("Element Founded..!");
            }
            else
            {
                printf("Element Not Founded..!");
            }
            break;
            case 7:
            display();
            break;
            case 8:
            exit(1);
            default:
            printf("Wrong Choice\n");
        }
    }
}
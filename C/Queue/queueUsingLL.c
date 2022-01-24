#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int d)
{
    struct node *new = malloc(sizeof(struct node));
    new->data = d;
    new->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = new;
    }
    else
    {
        rear->next = new;
        rear = new;
    }
}
void dequeue()
{
    struct node *temp;
    if (front == NULL)
    {
        printf("Underflow");
    }
    else
    {
        temp = front;
        front = front->next;
        free(temp);
    }
}
void frontElement()
{
    if (front == NULL)
    {
        printf("\nUnderflow\n");
    }
    printf("Front Element Is: %d", front->data);
}
void rearElement()
{
    if (front == NULL && rear == NULL)
    {
        printf("\nUnderflow\n");
    }
    printf("Rear Element is: %d", rear->data);
}
void countElement()
{
    int count = 0;
    struct node *t = front;
    if (front == NULL && rear == NULL)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        while (t != NULL)
        {
            count++;
            t = t->next;
        }
        printf("Total Elements: %d", count);
    }
}
int searching(int se)
{
    struct node *p = front;
    if (front == NULL)
    {
        printf("\nUnderflow\n");
    }
    while (p != NULL)
    {
        if (p->data == se)
            return 1;
            p = p->next;
    }
    return 0;
}
void display()
{
    struct node *ptr = front;
    if (ptr == NULL)
    {
        printf("\nUnderflow\n");
    }
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
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
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            frontElement();
            break;
        case 4:
            rearElement();
            break;
        case 5:
            countElement();
            break;
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
        }
    }
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *top = NULL;
void push(int d)
{
    struct node *temp = malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOverflow");
    }
    temp->data = d;
    temp->next = NULL;
    temp->next = top;
    top = temp;
}
int isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
int pop()
{
    int val;
    struct node *temp1;
    if (isEmpty())
    {
        printf("\nStack Underflow");
    }
    temp1 = top;
    val = temp1->data;
    top = top->next;
    free(temp1);
    temp1 = NULL;
    return val;
}
void display()
{
    struct node *ptr = top;
    if (top == NULL)
    {
        printf("nStack Overflow");
    }
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("Pushing Elements Are: \n");
    display();
    pop();
    pop();
    pop();
    printf("\nAfter Poping, Element Are:\n");
    display();
}
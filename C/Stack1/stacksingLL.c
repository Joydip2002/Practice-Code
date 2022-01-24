#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *top = NULL;
void push(int data)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;
    if (newNode == NULL)
    {
        printf("\n......Stack Overflow......\n");
    }
    newNode->next = NULL;
    newNode->next = top;
    top = newNode;
}
int pop()
{
    struct node *temp;
    int val;
    if (top == NULL)
    {
        printf("\n........Stack Underlow......\n");
    }
    temp = top;
    val = temp->data;
    top = top->next;
    free(temp);
    temp = NULL;
    return val;
}
int tos(){
    if (top == NULL)
    {
        printf("\n.....Stack Underflow.....\n");
    }
    return top->data;
    
}
void display()
{
    struct node *ptr = top;
    if (top == NULL)
    {
        printf("\n.......Stack Underflow.......\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}
int main()
{
    printf("Pushing Element: \n");
    push(1);
    push(11);
    push(12);
    push(13);
    display();
    printf("After Poping Element: \n");
    // pop();
    pop();
    pop();
    display();
    printf("Top Of stack Is: %d",tos());
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 3
int stack_arr[MAX];
int top = -1;

void push_Element(int data)
{
    if (top == MAX - 1)
    {
        printf("\n------------Stack Overflow------------");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}
// int isFull()
// {
//     if (top = (MAX - 1))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int pop_Element()
{
    int value;
    if (isEmpty())
    {
        printf("\n---------------Stack Underflow------------");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}
void print()
{
    if (top == -1)
    {
        printf("\n----------Stack Underflow------------");
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack_arr[i]);
    }
}
int searchElement(int data)
{
    for (int i = 0; i <= top; i++)
    {
        if (stack_arr[i] == data)
        {
            printf("Elementm Founded..!");
            return 1;
        }
    }
    printf("Element Not Founded..!");
    return 0;
}
int tos()
{
    if (top == -1)
    {
        printf("\n..........Stack Underflow.....");
    }
    return stack_arr[top];
}


int main()
{

    while (1)
    {
        printf("\nMENU\n1.PUSH ELEMENT\n2.POP ELEMENT\n3.DISPLAY\n4.SEARCHING\n5.TOP_ELEMENT\n6.EXIT\n");
        int choice;
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            int a;
            printf("Enter Your Element: ");
            scanf("%d", &a);
            push_Element(a);
            break;
        case 2:
            pop_Element();
            break;
        case 3:
            printf("Pushing Element Are:\n");
            print();
            break;
        case 4:
            int element;
            printf("Enter Searching Element: ");
            scanf("%d", &element);
            searchElement(element);
            break;
        case 5:
            printf("%d", tos());
            break;
        case 6:
            exit(1);
        default:
            printf("Wrong Choice");
        }
    }
}
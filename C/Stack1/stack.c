#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define Max 5
int stack_Arr[Max];
int top = -1;
void pushElement(int d)
{
    if (top == Max - 1)
    {
        printf("\nStack Overflow\n");
    }
    top = top + 1;
    stack_Arr[top] = d;
}
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int popElement()
{
    int value;
    if (isEmpty())
    {
        printf("Stack Underflow");
        exit(1);
    }
    value = stack_Arr[top];
    top = top - 1;
    return value;
}
int TOS()
{
    if (top == -1)
    {
        printf("Stack Underflow");
    }
    return stack_Arr[top];
}
void display()
{
    if (top == -1)
    {
        printf("\n----------Stack Underflow------------");
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack_Arr[i]);
    }
}
int main()
{
    while (1)
    {
        int c;
        printf("\n1.Push Element\n2.Pop Element\n3.Top Of Stack\n4.Display\n");
        printf("Enter Your Choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            int d;
            printf("Enter Pushing Element: ");
            scanf("%d", &d);
            pushElement(d);
            break;
        case 2:
            printf("After Poping Element: ");
            popElement();
            break;
        case 3:
            printf("%d",TOS());
            break;
        case 4:
            printf("Elements In Stack: \n");
            display();
            break;
        default:
            break;
        }
    }
}

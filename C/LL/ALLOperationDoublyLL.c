#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;
void creatNode(int p)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = p;
    if (head == NULL)
    {
        head = tail = NULL;
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        tail->next = NULL;
    }
}
void addAtFirst(int d)
{
    struct node *first = malloc(sizeof(struct node));
    struct node *ptr = head;
    first->data = d;
    if (head == NULL)
    {
        printf("Empty List");
    }
    else
    {
        first->next = head;
        head->prev = first;
        head = first;
    }
}
void addAtLast(int d)
{
    struct node *last = malloc(sizeof(struct node));
    struct node *temp = head;
    last->data = d;
    if (head == NULL)
    {
        printf("Empty List");
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        last->prev = temp;
        temp->next = last;
        last->next = NULL;
    }
}
void addAtAnyPos(int d, int pos)
{
    int i;
    struct node *anyposNode = malloc(sizeof(struct node));
    struct node *ptr = head;
    struct node *ptr1;
    anyposNode->data = d;
    if (head == NULL)
    {
        printf("Empty List");
    }
    else
    {

        for (i = 0; i < pos; i++)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        anyposNode->prev = ptr1;
        ptr1->next = anyposNode;
        anyposNode->next = ptr;
        ptr->prev = anyposNode;
    }
}
void deleteAtFirst()
{
    if (head == NULL)
    {
        printf("Empty List");
    }
    struct node *temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}
void deleteAtLast()
{
    struct node *temp1 = head;
    struct node *temp3;
    if (head == NULL)
    {
        printf("Empty Lidt");
    }
    else
    {
        while (temp1->next != NULL)
        {
            temp3 = temp1;
            temp1 = temp1->next;
        }
        // temp1->prev->next = NULL;
        temp3->next = NULL;

        free(temp1);
    }
}
void deleteAnyPostitiom(int pos)
{
    int i;
    struct node *anyPosNode = malloc(sizeof(struct node));
    struct node *ptr = head;
    struct node *ptr1;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        for (i = 0; i < pos; i++)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr->next->prev = ptr1;
        ptr1->next = ptr->next;
        free(ptr);
    }
}
void count()
{
    struct node *countNode = head;
    int count = 0;
    if (head == NULL)
    {
        printf("UnderFlow");
    }
    else
    {
        while (countNode != NULL)
        {
            count++;
            countNode = countNode->next;
        }
        printf("Total Nodes Are: %d", count);
    }
}
int searching(int se)
{
    struct node *searchingNode = head;
    while (searchingNode != NULL)
    {
        if (searchingNode->data == se)

            return 1;
        searchingNode = searchingNode->next;
    }
    return 0;
}
void middleNode()
{
    struct node *slow, *fast;
    slow = head;
    fast = head;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        printf("Middle Node Is: %d", slow->data);
    }
}
void reverseLL(struct node *head)
{
    struct node *rev = head;
    if (rev == NULL)
    {
        printf("Empty List");
    }
    else
    {
        if (rev->next == NULL)
        {
            printf("%d->", rev->data);
            return;
        }
        reverseLL(rev->next);
        printf("%d->", rev->data);
    }
}
void display()
{
    struct node *temp = head;
    if (temp == NULL)
    {
        printf("Empty List");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d  ", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int n, i, d;
    printf("How Many Nodes You Want to Enter?: ");
    scanf("%d", &n);
    printf("Enter Element Are:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &d);
        creatNode(d);
    }
    while (1)
    {
        int n, choice;
        printf("\n1.AddAtFirst\n2.Display\n3.AddAtLast\n4.AddAtAnyPosition\n5.DeleteAtFirst\n6.DeleteAtLast\n7.DeleteAtAnyPostion\n8.CountNode\n9.Searching\n10.Middle Node\n11.Reverse LinkedLlist\n12.Exit\n");
        printf("Enter Your Choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            int n;
            printf("Enter Adding Number of First Position:\n");
            scanf("%d", &n);
            addAtFirst(n);
            break;
        case 2:
            printf("Doubly Linked List is: \n");
            display();
            break;
        case 3:
            int m;
            printf("Enter Adding Number of last Position:\n");
            scanf("%d", &m);
            addAtLast(m);
            break;
        case 4:
            int item, pos;
            printf("Enter Adding item:\n");
            scanf("%d", &item);
            printf("Enter Position: ");
            scanf("%d", &pos);
            addAtAnyPos(item, pos);
            break;
        case 5:
            deleteAtFirst();
            break;
        case 6:
            deleteAtLast();
            break;
        case 7:
            int p;
            printf("Enter Position: ");
            scanf("%d", &p);
            deleteAnyPostitiom(p);
            break;
        case 8:
            count();
            break;
        case 9:
            int s;
            printf("Enter Searching Element: ");
            scanf("%d", &s);
            if (searching(s) == 1)
            {
                printf("Element Founded\n");
            }
            else
            {
                printf("Element Not Founded..!\n");
            }
            break;
        case 10:
            middleNode();
            break;
        case 11:
            printf("\nReverse Doubly Linked List Is: \n");
            reverseLL(head);
            break;
        case 12:
            exit(1);
        default:
            break;
        }
    }
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    // struct node *prev;
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;
void creatNode(int d)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = d;
    if (head == NULL)
    {
        //head = tail = NULL;
        head = newNode;
        tail = newNode;
        newNode->next = head;
    }
    else
    {
        tail->next = newNode;
        // newNode->prev = tail;
        tail = newNode;
        tail->next = head;
    }
}
void addNodeAtFirst(int data)
{
    struct node *first = malloc(sizeof(struct node));
    first->data = data;
    if (head == NULL)
    {
        printf("Empty List");
    }
    else
    {
        first->next = head;
        head = first;
        tail->next = head;
    }
}
void addAtLast(int d)
{
    struct node *last = malloc(sizeof(struct node));
    struct node *temp = head;
    last->data = d;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = last;
        tail = tail->next;
        tail->next = head;
    }
}
void addAtAnyPossition(int d, int pos)
{

    int i;
    struct node *anyPos = malloc(sizeof(struct node));
    struct node *ptr = head;
    struct node *ptr1;
    anyPos->data = d;
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
        ptr1->next = anyPos;
        anyPos->next = ptr->next;
    }
}
void deleteAtFirst()
{
    struct node *p;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        p = head;
        head = head->next;
        tail->next = head;
        free(p);
    }
}
void deleteAtLast()
{
    struct node *a = head;
    struct node *b;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        while (a->next != head)
        {
            b = a;
            a = a->next;
        }
        b->next = NULL;
        tail = b;
        tail->next = head;
        free(a);
    }
}
void deleteAtAnyPosition(int pos)
{

    int i;
    struct node *anyposDelete = head;
    struct node *ptr2;
    if (head == NULL)
    {
        printf("Underlow");
    }
    else
    {
        for (i = 0; i < pos; i++)
        {
            ptr2 = anyposDelete;
            anyposDelete = anyposDelete->next;
            if (anyposDelete == NULL)
            {
                printf("Underflow");
            }
        }
        ptr2->next = anyposDelete->next;
        free(anyposDelete);
    }
}
void count()
{
    int count = 0;
    struct node *countNode = head;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        do
        {
            count++;
            countNode = countNode->next;
        } while (countNode != head);
        printf("Total Node In Circular Linked list: %d", count);
    }
}
void middle()
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
        do
        {
            slow = slow->next;
            fast = fast->next->next;
        } while (fast != head && fast->next != head);
        printf("Middle Node Is : %d", slow->data);
    }
}
int searching(int se)
{
    struct node *sele = head;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        do
        {
            if (sele->data == se)
                return 1;
                sele = sele->next;
        } while (sele!= head);
        return 0;
    }
}
void reversal(struct node *head)
{
    struct node *rev = head;
    if (head == NULL)
    {
        printf("Underflorw");
    }
    else
    {
        do
        {
            printf("%d", rev->data);
            return;
        }while(rev->next == head);
        reversal(rev->next);
        printf("%d", rev->data);
    }
}
void display()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }
}
int main()
{
    while (1)
    {
        int choice;
        printf("\n\n1.Creatnode\n2.Display\n3.AddAtFirst\n4.AddAtLast\n5.AddAtAnyPosition\n6.DeletAtFirst\n7.DeleteAtLast\n8.AnyPositionDelete\n9.Count Node\n10MiddleNode\n11Searching\n12.Reversal List\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            int i, n;
            printf("Enter Number for Create Node: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                int item;
                printf("Enter Number: ");
                scanf("%d", &item);
                creatNode(item);
            }
            break;
        case 2:
            printf("Circular Linked list is:\n");
            display();
            break;
        case 3:
            printf("After Adding First element: \n");
            addNodeAtFirst(34);
            break;
        case 4:
            addAtLast(56);
            break;
        case 5:
            addAtAnyPossition(123, 3);
            break;
        case 6:
            deleteAtFirst();
            break;
        case 7:
            deleteAtLast();
            break;
        case 8:
            deleteAtAnyPosition(2);
            break;
        case 9:
            count();
            break;
        case 10:
            middle();
            break;
        case 11:
            int s;
            printf("Enter Searching Element: ");
            scanf("%d", &s);
            if (searching(s) == 1)
            {
                printf("\nElement Founded..!\n");
            }
            else
            {
                printf("\nElement Not Founded..!\n");
            }
            break;
        case 12:
            printf("Reverse List: \n");
            reversal(head);
            break;
        default:
            printf("Wrong Choice");
            break;
        }
    }
}

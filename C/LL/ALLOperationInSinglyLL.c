#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void addAtFirst(struct node **head, int d)
{
    struct node *newNode = malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Empty List");
    }
    newNode->data = d;
    newNode->link = NULL;
    newNode->link = *head;
    *head = newNode;
}
void addAtLast(struct node **head, int d)
{
    struct node *ptr2 = *head;
    struct node *LastNode = malloc(sizeof(struct node));
    LastNode->data = d;
    while (ptr2->link != NULL)
    {
        ptr2 = ptr2->link;
    }
    ptr2->link = LastNode;
    LastNode->link = NULL;
}
void AddAtAnyPos(struct node **head, int pos, int d)
{
    int i;
    struct node *anyposNode = malloc(sizeof(struct node));
    struct node *ptr3 = *head;
    anyposNode->data = d;
    anyposNode->link = NULL;
    // if(anyposNode>pos){
    //     printf("Not Valid Position");
    // }
    for (i = 0; i < pos; i++)
    {
        ptr3 = ptr3->link;
    }
    anyposNode->link = ptr3->link;
    ptr3->link = anyposNode;
}
void deleteAtfirst(struct node **head)
{
    if (head == NULL)
    {
        printf("Empty List");
    }
    struct node *h = *head;
    *head = h->link;
    free(h);
}
void deleteAtLast(struct node *head)
{
    struct node *ptr5 = head;
    struct node *ptr6;
    if (head == NULL)
    {
        printf("Empty List");
    }
    else if (ptr5->link == NULL)
    {
        ptr5 = NULL;
        free(ptr5);
    }
    else
    {
        while (ptr5->link != NULL)
        {
            ptr6 = ptr5;
            ptr5 = ptr5->link;
        }
        ptr6->link = NULL;
        free(ptr5);
    }
}
void deleteAtAnyPos(struct node *head, int pos)
{
    int i;
    struct node *ptr7 = head;
    struct node *ptr8;
    for (i = 0; i < pos; i++)
    {
        ptr8 = ptr7;
        ptr7 = ptr7->link;
        if (ptr7 == NULL)
        {
            printf("Empty List");
        }
    }
    ptr8->link = ptr7->link;
    free(ptr7);
}
void middleNode(struct node *head)
{
    struct node *slow, *fast;
    slow = head;
    fast = head;
    if (head != NULL)
    {
        while (fast != NULL && fast->link != NULL)
        {
            slow = slow->link;
            fast = fast->link->link;
        }
        printf("middle Node Is : %d", slow->data);
    }
}
int searching(struct node *head, int se)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == se)     
        return 1;
        temp = temp->link;
    }
    return 0;
}
void countNode(struct node *head)
{
    struct node *temp1 = head;
    int count = 0;
    while (temp1 != NULL)
    {
        count++;
        temp1 = temp1->link;
    }
    printf("Total Nodes Is : %d", count);
}
void reverseLL(struct node *head)
{
    struct node *rev = head;
    if(rev == NULL){
        printf("Empty List");
    }
    else{
        if (rev->link == NULL)
        {
            printf("%d->",rev->data);
            return;
           
        }
        reverseLL(rev->link);
       printf("%d->",rev->data);
    }
    
}
void display(struct node *head)
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("Empty List");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d->", ptr->data);
            ptr = ptr->link;
        }
        printf("NULL");
    }
}

int main()
{
    struct node *head, *y, *z;
    int i, n;
    printf("Enter How many Nodes Here: ");
    scanf("%d", &n);
    head = (struct node *)malloc(sizeof(struct node));
    y = head;
    printf("Enter Data: ");
    scanf("%d", &y->data);
    for (i = 2; i <= n; i++)
    {
        z = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &z->data);
        y->link = z;
        y = z;
    }
    y->link = NULL;
    while (1)
    {
        int n;
        printf("\n1.List\n2.AddAtFirst\n3.AddAtLast\n4.AddAnyPosition\n5.DeleteAtFirst\n6.DeleteAtLast\n7.DeleteAtAnyPosition\n8.MiddleNode\n9.Searching\n10.count nodes\n11.reverse list\n12.Exit\n");
        printf("Enter Your Choice:\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("SLL Element Are:\n");
            display(head);
            break;
        case 2:
            addAtFirst(&head, 12);
            break;
        case 3:
            addAtLast(&head, 15);
            break;
        case 4:
            AddAtAnyPos(&head, 3, 100);
            break;
        case 5:
            deleteAtfirst(&head);
            break;
        case 6:
            deleteAtLast(head);
            break;
        case 7:
            deleteAtAnyPos(head, 4);
            break;
        case 8:
            middleNode(head);
            break;
        case 9:
            if(searching(head, 4) == 1){
                printf("Element Founded..!");
            }
            else{
                printf("Element Not Founded..!"); 
            }
            break;
        case 10:
            countNode(head);
            break;
        case 11:
        reverseLL(head);
        break;
        case 12:
            exit(1);
        default:
         printf("Worng Choice");
            break;
        }
    }
}
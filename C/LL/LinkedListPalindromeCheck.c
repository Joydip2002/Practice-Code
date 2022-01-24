#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct ListNode
{
    int data;
    struct ListNode *next;
};
struct ListNode *head = NULL;
struct ListNode *tail = NULL;
void creatNode(int d)
{
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->data = d;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->next = NULL;
        tail = newNode;
    }
}
void display()
{
    struct ListNode *temp = head;
    if (head == NULL)
    {
        printf("Empty List");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }
}
struct ListNode *findMiddle()
{
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
struct Listnode *reverse(struct ListNode *temp)
{
    struct ListNode *curr = temp;
    struct Listnode *prev = NULL, *nextNode = NULL;
    while (curr != NULL)
    {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}
int checkPalindromeLL()
{
    if (head == NULL || head->next == NULL)
    {
        return 1;
    }
    struct ListNode *middle = findMiddle(head);
    struct ListNode *secondHalfStart = reverse(middle->next);
    struct ListNode *firstHalfNode = head;
    while (secondHalfStart != NULL)
    {
        if (firstHalfNode->data != secondHalfStart->data)
        {
            return 0;
        }
        firstHalfNode = firstHalfNode->next;
        secondHalfStart = secondHalfStart->next;
    }
    return 1;
}
int main()
{
    while (1)
    {
        int choice;
        printf("\n1.AddNode\n2.Display\n");
        printf("Enter Your Choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            int n;
            printf("Enter Data: ");
            scanf("%d", &n);
            creatNode(n);
            break;
        case 2:
            printf("\nLinkedList Is:\n\n");
            display();
            break;
        case 3:
            if (checkPalindromeLL() == 1)
            {
                printf("Palindromic Number");
            }
            else
            {
                printf("Not Palindrome number");
            }
            break;

        default:
            break;
        }
    }
}
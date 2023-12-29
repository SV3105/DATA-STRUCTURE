#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*tail,*temp;
void createDLL()
{
    struct node *newnode;
    head = 0;
    int choice = 1;
    while(choice)
    {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    if(head == 0)
    {
        head = tail = newnode;
    }
    else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    printf("do you want to continue : ");
    scanf("%d",&choice);
    }
}

void display()
{
    int count=0;
    temp = head;
    while(temp != 0)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
        count++;
    }
     printf("no. of nodes: %d",count);
}

void insertAtBeginning()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nenter data you want to insert : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    head->prev = newnode;
    newnode -> next = head;
    head = newnode;
}

void insertAtPosition()
{
    int pos, i=1;
    temp = head;
    struct node *newnode;
    printf("\nenter position : ");
    scanf("%d",&pos);
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nenter data you want to insert : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    while(i<pos-1)
    {
        temp = temp->next;
        i++;
    }
    newnode->prev = temp;
    newnode->next = temp ->next;
    temp->next = newnode;
    newnode->next->prev = newnode;
}

void insertAtEnd()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nenter data you want to insert : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    tail->next = newnode;
    newnode-> prev = tail;
    tail = newnode;
}

int main()
{
    
    createDLL();
    printf("display before insertion: ");
    display();
    insertAtPosition();
    printf("display after insertion: ");
    display();
     return 0;
}


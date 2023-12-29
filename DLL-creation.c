#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*tail,*newnode,*temp;

void create()
{
    head = 0;
    int choice = 1;
    while(choice)
    {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    if(head == 0)
    {
        head = temp = newnode;
    }
    else{
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
    printf("do you want to continue: ");
    scanf("%d",&choice);
    }
}

int main()
{
    int count=0;
    create();
    temp = head;
    while(temp != 0)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
        count++;
    }
     printf("no. of nodes: %d",count);
     return 0;
}
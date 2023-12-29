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

void delFromBegg()
{
    if(head==0)
    {
        printf("list is empty");
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = 0;
        free(temp);
    }
}

void delFromEnd()
{
    if(head==0)
    {
        printf("list is empty");
    }
    else
    {
        temp = tail;
        tail=tail->prev;
        tail->next=0;
        free(temp);
    }
}

void delFromPos()
{
    int i=1,pos;
    temp = head;
    printf("\nenter position : ");
    scanf("%d",&pos);
    while(i<pos)
    {
        temp = temp->next;
        i++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}


int main()
{
    
    createDLL();
    printf("display before deletion: ");
    display();
    delFromPos();
    printf("display after deletion: ");
    display();
     return 0;
}


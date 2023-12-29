#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head;
void create()
{
    struct node *newnode,*temp;
    head = 0;
    int choice=1;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data: ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(head==0)
        {
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        temp->next = head;
        printf("do you want to continue : ");
        scanf("%d",&choice);
    }
}

void display()
{
    struct node *temp;
    if(head == 0)
    {
        printf("list is empty");
    }
    else
    {
        temp = head;
        while(temp->next != head)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
           
        }
         printf("%d\n",temp->data);
    }
}

int main()
{
    create();
    printf("print the elements of CLL: \n");
    display();
    return 0;
}
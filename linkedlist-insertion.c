#include<stdio.h>
#include<stdlib.h>
 struct node 
    {
        int data;
        struct node *next;
    };
struct node *head , *newnode, *temp;
void create()
{
    head = 0;
    int choice = 1;
    while(choice)
    {
        newnode = (struct node *)(malloc(sizeof(struct node)));
        printf("enter data : ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(head == 0)
        {
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    printf("do you want to continue(0,1) : ");
    scanf("%d",&choice);
    }
}

void insertAtBeginning()
{
    newnode = (struct node *)(malloc(sizeof(struct node)));
    printf("enter data you want to insert : ");
    scanf("%d",&newnode->data);
    newnode ->next = head;
    head = newnode;
    
}

void insertAtEnd()
{
    newnode = (struct node *)(malloc(sizeof(struct node)));
    printf("enter data you want to insert : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    temp = head;
    while(temp->next!=0)
    {
        temp = temp->next;
    }
    temp ->next=newnode;
}
void insertAtPosition()
{
    newnode = (struct node *)(malloc(sizeof(struct node)));
    printf("enter data you want to insert : ");
    scanf("%d",&newnode->data);
    int pos,i=1;
    printf("enter position : ");
    scanf("%d",&pos);
    temp = head;
    if(i<pos-1 && temp!=0){
    while(i<pos)
    {
        temp = temp->next;
        i++;
    }
    }
    newnode->next=temp->next;
    temp->next = newnode;
}
void display()
   {
     temp = head;
    while(temp != 0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
   }

int main()
{
    create();
    printf("display before insertion: \n");
    display();
    //insertAtBeginning();
    //insertAtEnd();
    insertAtPosition();
    printf("display after insertion: \n");
    display();
    return 0;
    } 

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

void deleteAtBeginning()
{
    if(head == 0)
    {
        printf("empty");
    }
    else{
        temp = head;
        head = head ->next;
        free(temp);
        }
}

void deleteAtEnd()
{
    struct node *prevnode;
    temp=head;
    while(temp->next!=0)
    {
        prevnode = temp;
        temp = temp ->next;
    }
    if(head == temp)
    {
        head = 0;
        free(temp);
    }
    else{
        prevnode->next = 0;
        free(temp);
    }
    
}

void deleteAtPosition()
{   
    struct node *nextnode;
    int pos, i=1;
    temp=head;
    printf("enter position : ");
    scanf("%d",&pos);
    while(i<pos -1)
    {
        temp = temp ->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
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
    printf("display before deletion: \n");
    display();
    //deleteAtBeginning();
    //deleteAtEnd();
    deleteAtPosition();
    printf("display after deletion: \n");
    display();
    return 0;
    } 

#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node * front = 0;
struct node * rear = 0;
void enqueue()
{
    int x;
    printf("enter data: ");
    scanf("%d",&x);
    struct node *newnode;
    newnode = (struct node *)(malloc (sizeof(struct node)));
    newnode->data = x;
    newnode->next = 0 ;
    if(front==0 && rear==0)
    {
        front=rear= newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void display()
{
    struct node *temp;
    if(front==0 && rear==0)
    {
        printf("queue is empty");
    }
    else{
        temp = front;
        while(temp != 0)
        {
            printf("element of queue is %d\n",temp->data);
            temp = temp->next;
        }
    }
}

void dequeue()
{
    struct node *temp;
    temp = front ;
    if(front == 0 && rear == 0)
    {
        printf("underflow");
    }
    else{
        printf("dequed element is %d",front->data);
        front= front->next;
        free(temp);
    }
}

void peek()
{
    if(front==0 && rear==0)
    {
        printf("queue is empty");
    }
    else
    {
        printf("peek is %d",front->data);
    }
}

void main()
{
int choice =0;
    while(choice!=5){
    printf("\nchoose one from the below\n");
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.peek\n5.exit\n");
    printf("enter choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
        {
            enqueue();
            break;
        }
        case 2: 
        {
            dequeue();
            break;
        }
        case 3: 
        {
            display();
            break;
        }
        case 4: 
        {
            peek();
            break;
        }
        case 5:
        {
            printf("exit...");
            break;
        }
        default: {
            printf("enter valid choice");
        }
    }; 
}
}
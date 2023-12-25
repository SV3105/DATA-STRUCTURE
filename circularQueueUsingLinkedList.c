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
    printf("enter data : ");
    scanf("%d",&x);
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if(front==0 && rear==0)
    {
        front = rear = newnode;
        rear->next = front;
    }
    else {
        rear ->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void dequeue()
{
    struct node *temp;
    temp = front ;
    if(front == 0 && rear==0)
    {
        printf("queue is empty");
    }
    else if(rear == front)
    {
        rear = front = 0;
        free(temp);
    }
    else
    {
        printf("dequeued element is %d",front->data);
        front = front ->next;
        rear->next = front;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp = front;
    if(front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else{
        printf("queue elements are : ");
         while(temp->next != front)
        {
            printf("%d\n",temp->data);
            temp = temp->next;
        }
        printf("%d",temp->data);
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

#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue()
{
    int x;
    printf("enter data: ");
    scanf("%d",&x);
    if(rear==N-1)
    {
        printf("overflow");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
    
}
void dequeue()
{
    if(front== -1 && rear== -1)
    {
        printf("underflow");
    }
    else {
        printf("dequeued element is : %d",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front== -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else{
        for(i=front; i<rear+1; i++)
        {
            printf("queueu element is : %d\n",queue[i]);
        }
    }
}
void peek()
{
    if(front== -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else{
        printf("peek : %d",queue[front]);
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
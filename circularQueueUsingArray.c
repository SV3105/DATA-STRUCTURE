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
    if(front==-1 && rear==-1)
    {
        front=rear = 0;
        queue[rear] = x;
    }
    else if ((rear+1)%N == front)
    {
        printf("overflow");
    }
    else{
        rear = (rear +1)%N;
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("dequeued element is %d",queue[front]);
        front=(front+1)%N;
    }
}

void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else{
        printf("queue is : ");
        while (i!=rear)
        {
            printf("%d\n",queue[i]);  
            i = (i+1)%N; 
        }
        printf("%d\n",queue[rear]);
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
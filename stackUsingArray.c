#include<stdio.h>
#define N 5
int stack[N];
int top = -1;

void push()
{
int x;
printf("enter data : ");
scanf("%d",&x);
if(top == N-1)
{
    printf("overflow!");
}
else{
    top++;
    stack[top]= x;
}
}

void pop()
{
    int item;
    if(top == -1)
    {
        printf("underflow!");
    }
    else{
        item = stack[top];
        top--;
    }
    printf("%d",item);
}

void peek()
{
    if(top == -1)
    {
        printf("stack is empty");
    }
    else{
        printf("Top : %d",stack[top]);
    }
}

void display()
{
    int i;
    for(i=top; i>=0; i--)
    {
        printf("element of stack : %d\n",stack[i]);
    }
}
 
void main()
{
    int choice =0;
    while(choice!=5){
    printf("\nchoose one from the below\n");
    printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
    printf("enter choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
        {
            push();
            break;
        }
        case 2: 
        {
            pop();
            break;
        }
        case 3: 
        {
            peek();
            break;
        }
        case 4: 
        {
            display();
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
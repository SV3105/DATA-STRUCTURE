#include<stdio.h>
int main()
{
int arr[50] , size, i , num , pos ;
printf("enter the size of array : " );
scanf("%d",&size);
printf("enter the elements of array : ");
for(int i=0; i<size; i++)
{
scanf("%d",&arr[i]);
}
printf("enter data you want to insert : ");
scanf("%d",&num);
printf("enter position: ");
scanf("%d",&pos);
for(i=size-1; i>=pos - 1; i--)
{
    arr[i+1] = arr[i];
}
arr[pos-1] = num;
size++;
printf("elements in array are: ");
for(int i=0; i<size; i++)
{
    printf("%d\n",arr[i]);
}
return 0;
}
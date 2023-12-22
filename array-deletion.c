#include<stdio.h>
int main()
{
int arr[50] , size , pos, item;
printf("enter the size of array : " );
scanf("%d",&size);
printf("enter the elements of array : ");
for(int i=0; i<size; i++)
{
scanf("%d",&arr[i]);
}
printf("enter the position you want to delete: ");
scanf("%d",&pos);
if(pos<=0 || pos>size+1){
    printf("invalid position");
}
else{
item = arr[pos-1];
for(int i=pos-1; i< size -1 ; i++)
{
arr[i] = arr[i+1];
}
size--;
printf("item : %d\n",item);
}
printf("elements in array are: ");
for(int i=0; i<size; i++)
{
    printf("%d\n",arr[i]);
}
return 0;
}
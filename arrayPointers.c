#include<stdio.h>
int main()
{
    int a[5],i;
    int *q = a;
    for(i=0; i<5; i++)
    {
        scanf("%d", &q[i]);  //scanf("%d", &a[i]); == (a+i),(i+a),(q+i)
    }
    printf("\n");
    for(i=0; i<5; i++)
    {
    printf("%d\n",*(q+i)); //printf("%d\n", a[i]);
    }
    return 0;
}
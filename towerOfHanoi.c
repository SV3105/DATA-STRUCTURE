#include<stdio.h>
void towerOfHanoi(int n,char src,char dest,char aux)
{
if(n==1)
{
    printf("\n Move disk 1 from %c to %c",src,dest);
}
else{
    towerOfHanoi(n-1,src,aux,dest);
    printf("\n Move disk %d from %c to %c ",n,src,dest);
    towerOfHanoi(n-1,aux,dest,src);
}
}
int main()
{
    int n;
    printf("enter n : \n");
    scanf("%d",&n);
    towerOfHanoi(n,'A','C','B');
    return 0;
}
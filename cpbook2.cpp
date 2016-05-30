#include<stdio.h>
int main()
{
    int arry[1000],i,pos=0,neg=0,j;
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        scanf("%d",&arry[i]);
    }
    for(i=0;i<j;i++)
    {
        if(arry[i]>0)
        pos++;
        else
        neg++;
    }
    printf("%d %d\n",pos,neg);
    return 0;
}

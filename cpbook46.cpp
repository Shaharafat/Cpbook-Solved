#include<stdio.h>
int main()
{
    int arry[100],i,n,l,k,j;
    scanf("%d",&i);
    for(n=0;n<i;n++)
    {
        scanf("%d",&k);
        for(l=0;l<k;l++)
        {
            scanf("%d",&arry[l]);
        }
        printf("Set %d: ",n+1);
        for(l=0;l<k;l=l+2)
        {
            printf("%d ",arry[l]);
        }
    }

}

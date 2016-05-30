#include<stdio.h>
int main()
{
    int a[100],i,j,k,c,sum=0;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        for(k=0;k<5;k++)
        {
            scanf("%d",&a[k]);
            sum=sum+a[k];
        }
        c=sum/5;
        printf("%d\n",c);
        sum=0;
    }

}

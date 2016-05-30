#include<stdio.h>
int main()
{
    long long int i,sum=0,m;
    int j,k,l,n;
    scanf("%d",&j);
    for(k=1;k<=j;k++)
    {
        scanf("%lld",&i);
        for(m=1;m<=(i/2);m++)
        {
            if((i%m)==0)
            sum=sum+m;
        }
        if(sum==i)
        printf("YES, %d is a perfect number!\n",i);
        else
        printf("NO, %d is not a perfect number!\n",i);
        sum=0;
    }
    return 0;
}

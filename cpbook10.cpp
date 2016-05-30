#include<stdio.h>
int main()
{
    int arry[100],i,j,k,l,flag,count=0;
    scanf("%d",&i);
    for(l=1;l<=i;l++)
    {
        for(j=0;j<10;j++)
        {
            scanf("%d",&arry[j]);
        }
        for(j=0;j<10;j++)
        {
            flag=1;
            if((arry[j]==1)||(arry[j]==0))
            continue;
            for(k=2;k<=(arry[j]/2);k++)
            {
            if((arry[j]%k)==0)
            {
                flag=0;
                break;
            }
            }
            if(flag==1)
            count++;
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}

#include<stdio.h>
using namespace std;
int main()
{
    int a[5],i,j,k,l,tmp,n;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        for(k=0;k<5;k++)
        {
            scanf("%d",&a[k]);
        }
        for(l=0;l<4;l++)
        {
            for(n=0;n<4;n++)
            {
                if(a[n]>a[n+1])
                {
                tmp=a[n+1];
                a[n+1]=a[n];
                a[n]=tmp;
                }
            }
        }
        printf("%d %d\n",a[4],a[0]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char a[3];
    int i,j,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%s",a);
       for(j=0;j<3;j++)
       {
          sum=sum+a[j];
       }
       printf("%d\n",sum);
       sum=0;
    }
    return 0;
}

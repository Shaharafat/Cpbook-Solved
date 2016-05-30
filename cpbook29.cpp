#include<stdio.h>
int main()
{
    int i,j,k,l,m,p,n;
    scanf("%d",&i);
    for(l=1;l<=i;l++)
    {
        scanf("%d %d",&k,&m);
         printf("Case %d:\n",l);
        for(j=1;j<=m;j++)
        {
            p=j;
            while(p)
            {
                printf("%d",k);
                p--;
            }
            printf("\n");
        }
    }
    return 0;
}


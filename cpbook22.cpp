#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        scanf("%d",&k);
        n=1;
        while(k)
        {
            for(l=1;l<k;l++)
            {
                printf(" ");
            }
            for(m=1;m<=n;m++)
            {
                printf("*");
            }
            printf("\n");
            n=n+2;
            k--;
        }
    }
}

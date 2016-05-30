#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        scanf("%d %d %d",&k,&l,&m);
        n=k*2;
        if((n<=l)&&(n<=m))
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}

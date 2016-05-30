#include<stdio.h>
int main()
{
    int a,b,c,i,j,vol;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        vol=a*b*c;
        printf("%d\n",vol);
    }
    return 0;
}

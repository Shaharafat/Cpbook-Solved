#include<stdio.h>
int main()
{
    long int i;
    int j,k,l,m,n;
    scanf("%d",&j);
    for(k=1;k<=j;k++)
    {
        scanf("%lld",&i);
        if((i%2)==0)
        printf("even\n");
        else
        printf("odd\n");
    }
    return 0;
}

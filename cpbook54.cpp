#include<stdio.h>
int main()
{
    int j,o,p,q,r;
    long long int i,l,m;
    scanf("%lld",&i);
    for(j=0;j<i;j++)
    {
        scanf("%lld %lld",&l,&m);
        p=1;
        r=l;
        while(r)
        {
            for(o=1;o<=p;o++)
            {
                printf("%lld",m);
            }
            p++;
            r--;
            printf("\n");
        }
        r=l-1;
        while(r)
        {
            for(q=1;q<=r;q++)
            printf("%lld",m);
            r--;
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

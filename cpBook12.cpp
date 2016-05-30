#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,j,l,m,k=0,len;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        scanf("%s",str);
        len=strlen(str);
        for(l=0;l<len;l++)
        {
            if(str[l]=='0')
            k++;
            else
            break;
        }
        if(len==k)
        printf("1\n");
        else
        printf("%d\n",len-k);
        k=0;
    }
    return 0;
}

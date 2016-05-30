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
            if(str[l]=='L')
            str[l]=str[l-1];
            else if(str[l]=='R')
            str[l]=str[l+1];
        }
        printf("%s\n",str);
    }
    return 0;
}


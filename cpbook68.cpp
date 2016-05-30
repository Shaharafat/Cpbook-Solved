#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    int i,j,k,l,len,count=0;
    scanf("%d\n",&i);
    for(j=0;j<i;j++)
    {
        len=strlen(gets(str));
        for(k=0;k<=len;k++)
        {
            if((str[k]==' ')||str[k]=='\0')
            count++;
        }
        printf("Count = %d\n",count);
        count=0;
    }
    return 0;
}

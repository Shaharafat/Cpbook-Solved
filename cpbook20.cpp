#include<stdio.h>
#include<string.h>
int main()
{
    char arry[1000];
    int i,j,k,len;
    long int count=0;
    scanf("%d\n",&i);
    for(j=1;j<=i;j++)
    {
        len=strlen(gets(arry));
        for(k=0;k<=len;k++)
        {
            if(arry[k]==' ')
            {
                while(arry[k]==' ')
                k++;
                count++;
            }
            if(arry[k]=='\0')
            count++;
        }
        count=count*420;
        printf("%ld\n",count);
        count=0;
    }
    return 0;
}

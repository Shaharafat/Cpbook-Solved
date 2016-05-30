#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,j,k,l,len,count=0;
    scanf("%d\n",&i);
    for(j=1;j<=i;j++)
    {
        len=strlen(gets(a));
        for(k=0;k<=len;k++)
        {
            if((a[k]==' ')||(a[k]=='\0'))
            {
                while(a[k]==' ')
                {
                    k++;
                }
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
    }
}

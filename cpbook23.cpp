#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,k,l,len;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        l=0;
        scanf("%s",str);
        len=strlen(str);
        for(k=0;k<=len;k++)
        {
           if((str[k]==48)||(str[k]==49))
           {
                if(str[k]==49)
                l++;
                else if(str[k]==48)
                {
                    l=l-1;
                    if(l==(-1))
                    {
                        printf("MAGIC\n");
                        break;
                    }
                }
           }
           else
                 printf("NORMAL\n");
        }
    }
    return 0;
}


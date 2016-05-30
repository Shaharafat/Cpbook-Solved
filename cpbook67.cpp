#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,k,l,len;
    scanf("%d\n",&i);
    for(j=0;j<i;j++)
    {
        len=strlen(gets(str));
        for(k=0;k<len;k++)
        {
            if((str[k]=='a')||(str[k]=='e')||(str[k]=='i')||(str[k]=='o')||(str[k]=='u')||(str[k]=='A')||(str[k]=='E')||(str[k]=='I')||(str[k]=='O')||(str[k]=='U'))
            printf("%c",str[k]);
        }
        printf("\n");
        for(k=0;k<len;k++)
        {
            if((str[k]!='a')&&(str[k]!='e')&&(str[k]!='i')&&(str[k]!='o')&&(str[k]!='u')&&(str[k]!='A')&&(str[k]!='E')&&(str[k]!='I')&&(str[k]!='O')&&(str[k]!='U')&&(str[k]!=' '))
            printf("%c",str[k]);
        }
        printf("\n");
    }
    return 0;
}

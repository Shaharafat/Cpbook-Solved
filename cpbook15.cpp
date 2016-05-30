#include<stdio.h>
#include<string.h>
int main()
{
    char a[500];
    int j,k,l=0,m,len;
    scanf("%d\n",&j);
    for(k=1;k<=j;k++)
    {
        len=strlen(gets(a));
        if((a[len-1]==48)||(a[len-1]==50)||(a[len-1]==52)||(a[len-1]==54)||(a[len-1]==56))
        printf("even\n");
        else
        printf("odd\n");
    }
    return 0;
}

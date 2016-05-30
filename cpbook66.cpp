#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int k,i,vowel=0;
    scanf("%d\n",&i);
    while(i--)
    {
        gets(str);
        for(k=0;str[k]!='\0';k++)
        {
            if(str[k]=='a'||str[k]=='A'||str[k]=='e'||str[k]=='E'||str[k]=='i'||str[k]=='I'||str[k]=='o'||str[k]=='O'||str[k]=='u'||str[k]=='U')
            vowel++;
        }
        printf("Number of vowels = %d\n",vowel);
        vowel=0;
    }
    return 0;
}

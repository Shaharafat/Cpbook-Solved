#include<stdio.h>
#include<string.h>
int main()
{
   char a[1000],c,d,temp;
   int i,j,m,k,l;
   scanf("%d\n",&i);
   for(j=1;j<=i;j++)
   {
      c=0;
      d=0;
      gets(a);
      m=1;
      for(k=0;k<=1;k++)
      {
         for(l=3;l<=4;l++)
         {
            if(a[k]==a[l])
            {
               c=a[k];
               while(m)
               {
                  d=c;
                  m=0;
               }
               break;
            }
         }
      }
      if(c>d)
      {
         temp=c;
         c=d;
         d=temp;
      }
      if((c==0)&&(d==0))
      printf("N");
      else if(c==d)
      {
         if(c==48)
         printf("0");
         else if(c==49)
         printf("1");
         else if(c==50)
         printf("2");
         else if(c==51)
         printf("3");
         else if(c==52)
         printf("4");
         else if(c==53)
         printf("5");
         else if(c==54)
         printf("6");
         else if(c==55)
         printf("7");
         else if(c==56)
         printf("8");
         else
         printf("9");
      }
      else
      {
         if(c==48)
         printf("0");
         else if(c==49)
         printf("1");
         else if(c==50)
         printf("2");
         else if(c==51)
         printf("3");
         else if(c==52)
         printf("4");
         else if(c==53)
         printf("5");
         else if(c==54)
         printf("6");
         else if(c==55)
         printf("7");
         else if(c==56)
         printf("8");
         else if(c==57)
         printf("9");
         if(d==48)
         printf("0");
         else if(d==49)
         printf("1");
         else if(d==50)
         printf("2");
         else if(d==51)
         printf("3");
         else if(d==52)
         printf("4");
         else if(d==53)
         printf("5");
         else if(d==54)
         printf("6");
         else if(d==55)
         printf("7");
         else if(d==56)
         printf("8");
         else
         printf("9");
      }
      printf("\n");
   }
   return 0;
}

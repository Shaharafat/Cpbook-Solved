#include<stdio.h>
#include<math.h>
int main()
{
   long int a[100];
   int k,i,j;
   scanf("%d",&j);
   for(i=0;i<j;i++)
   {
       scanf("%ld",&a[i]);
       k=sqrt(a[i]);
       if((k*k)==a[i])
       printf("YES\n");
       else
       printf("NO\n");
   }
   return 0;
}

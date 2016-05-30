#include<stdio.h>
long long int factorial(int j)
{
  if((j==0)||(j==1))
  return 1;
  else
  return (j*factorial(j-1));
}
int main()
{
  int i,n,k;
  long long int l;
  scanf("%d",&i);
  for(k=1;k<=i;k++)
  {
    scanf("%d",&n);
    l=factorial(n);
    printf("%lld\n",l);
  }
  return 0;
}

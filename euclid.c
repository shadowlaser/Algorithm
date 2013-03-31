#include <stdio.h>

int gcd(int m,int n);

void main()
{
  int m,n;
  m=10;
  n=12;
  printf("m=%d,n=%d\ngcd=%d\n",m,n,gcd(m,n));
}


int gcd(int m,int n)
{
  if(n==0)
    return m;
  else
    return gcd(n,m%n);
}
#include <stdio.h>

int Fibonacci(int n);

void main()
{
  int n=5;
  printf("n=%d\nFibonacci=%d\n",n,Fibonacci(n));
}

int Fibonacci(int n)
{
  if(n<=2)
    return 1;
  else
    return Fibonacci(n-1)+Fibonacci(n-2);
}

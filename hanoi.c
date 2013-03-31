#include <stdio.h>

void Move(char a,int n,char b);
void Hanoi(int n,char x,char y,char z);
void main()
{
  int n;
  char x,y,z;
  n=6;
  x='X',y='Y',z='Z';
  Hanoi(n,x,y,z);
}

void Hanoi(int n,char x,char y,char z)
{
  if(1==n)
  {
    Move(x,1,z);
    return ;
  }
    
  else
  {
    Hanoi(n-1,x,z,y);
    Move(x,n,z);
    Hanoi(n-1,y,x,z);
  }
}

void Move(char a,int n,char b)
{
  printf("把盘子%d从%c移动到%c\n",n,a,b);
}
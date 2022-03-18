#include<stdio.h>
int input(int*a , int*b)
{
  printf("enter the 2 numbers\n");
  scanf("%d""%d",a,b);
  return 0;
}
int add(int a, int b, int*sum)
{
  *s=a+b;
}
int output(int a, int b, int sum)
{
  printf("the sum of %d + %d is %d",a,b,sum);
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
}
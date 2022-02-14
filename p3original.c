#include<stdio.h>
int input()
{
  int x;
  printf("enter the value\n");
  scanf("%d",&x);
  return x;
}
int sum(int n)
{
  int i, sum=0;
  for(i=1;i<=n;i++)
  {
    sum+=i;
  }
  return sum;
}
void output(int n, int sum)
{
  printf("sum of %d numbers is %d",n,sum);
}
int main()
{
  int s,i;
  s=input();
  i=sum(s);
  output(s,i);
  return 0;
}
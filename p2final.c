#include<stdio.h>
int input()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int compare(int a, int b, int c)
{
  if(a>b && a>c)
  return a;
  else if (b>a && b>c)
  return b;
  else 
  return c;
}
int print(int a, int b, int c, int largest)
{
  printf("the greates of %d %d %d is %d",a,b,c,largest);
}
int main()
{
  int x,y,z,lar;
  x=input();
  y=input();
  z=input();
  lar=compare(x,y,z);
  print(x,y,z,lar);

}

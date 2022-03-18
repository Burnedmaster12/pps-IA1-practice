#include<stdio.h>
#include<math.h>

float input()
{
  float n;
  printf("enter the number for its square root");
  scanf("%f",&n);
  return n;
}
float root(float n)
{
  float guess=n/2;
  float next=n/guess;
  while(fabs(guess-next)>0.000001)
  {
    guess=(guess+next)/2;
    next=n/guess;
  
  }
  return next;
}
void output(float n, float a)
{
  printf("the square root of %f is %f\n",n,a);
}
int main()
{
  int n,sqroot;
  n=input();
  sqroot=root(n);
  output(n,sqroot);
  return 0;
}
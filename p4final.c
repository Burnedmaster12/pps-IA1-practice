#include<stdio.h>
int inputsize()
{
  int n;
  printf("Enter array size: \n");
  scanf("%d",&n);
  return n;
}
void input(int n, int a[n])
{
  int i;
  printf("Enter the elements: \n");
  for (i=0; i<n; i++)
  {
  scanf("%d", &a[i]);  
}
}

int arraysum(int n, int a[n])
{
  int i, sum=0;
  for(i=0; i<n; i++)
  {
    sum+= a[i];
  }
  return sum;
}
void output(int n, int a[n], int sum)
{
  int i;
  printf("The sum of the array elements \n");
  for(i=0; i<n; i++)
  {
    printf("%d +",a[i]);}
  printf("%d is %d \n", a[n-1],sum);
}
int main()
{
int n,sum;
n = inputsize();
int a[n];
input(n,a);
sum= arraysum(n,a);
output(n,a,sum);
return 0;
}
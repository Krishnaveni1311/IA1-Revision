#include <stdio.h>
int input()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
int calculate (int n)
{
  int i, sum=0;
  for (i=1;i<=n;++i)
  {
    sum +=i;
  }
  return sum;
}
int output(int n, int sum)
{
  printf("sum=%d", sum);
  return 0;
}
int main()
{
  int a=input();
  int b=calculate(a);
  output(a,b);
  return 0;
}
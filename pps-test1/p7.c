#include <stdio.h>
int input()
{
  int n;
  printf("enter the value of n:\n");
  scanf("%d",&n);
  return n;
}

void aray(int n,int a[10])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("enter elements %d :\n",i);
    scanf("%d",&a[i]);
  }
}
int add(int n,int a[10])
{
  int sum=0, i;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
  void output(int sum)
  {
    printf("sum is %d\n",sum);
  }
  int main()
  {
    int n,a[10],sum;
    n=input();
    aray(n,a);
    sum=add(n,a);
    output(sum);
    return 0;
  }
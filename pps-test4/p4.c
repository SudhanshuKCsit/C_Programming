
#include<stdio.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int fibo;
  int n1 = 0;
  int n2 = 1;
  fibo = n1 + n2 ;
  for(int i=2;i<n;++i)
    {
      printf("%d",fibo);
      n1 = n2 ;
      n2 = fibo ;
      fibo = n1 + n2 ;
    }
  return fibo;
}
void output(int n,int fibo)
{
  printf("\nfibonacci for %d is %d",n,fibo);
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}
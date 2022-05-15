# include <stdio.h>

void input(int *a,int *b)
{
  printf("Enter the value for a,b\n");
  scanf("%d %d",a,b);
}
void add(int a,int b,int *sum)
{
  scanf("%n",sum);
    
}
void output(int a,int b,int sum)
{
  sum=a+b;
  printf("The sum of two numbers is %d\n",sum);
}
int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;

}
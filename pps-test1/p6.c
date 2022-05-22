# include <stdio.h>

int input_n()
{
    int n;
    printf("Enter the positive number \n");
    scanf("%d",&n);
    return n;
}
int sum_n(int n)
{
     int sum=0,i;
     sum=(n*(n+1))/2;
     return sum;
}
void output (int n,int sum)
{
    printf("sum of n natural numbers is %d\n",sum);

}
int main()
{
    int i,n,sum;
    n=input_n();
    sum=sum_n(n);
    output(n,sum);
}
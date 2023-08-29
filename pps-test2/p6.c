
# include <stdio.h>
int array_size(int n){
  printf(" Enter value : ");
  scanf("%d",&n);
  return n ;
}
void input(int n,int a[n])
{
  int i;
  for(i = 0 ; i < n ; i++)
  scanf("%d",&a[i]);
}
float odd_average(int n ,int a[n]){
  float avg ,sum;
  int i,count=0;
  for(i=0;i<n;i++)
  if(a[i]%2 != 0){
    sum = sum + a[i];
    count++;
  }
  avg = (sum/count);
  return avg;
}
void output(float avg){
  printf(" The average of the odd numbers : %f \n",avg);
}
int main(){
  int n = array_size(n);
  int a[n];
  input(n,a);
  float avg = odd_average(n,a);
  output(avg);
  return 0 ;
}
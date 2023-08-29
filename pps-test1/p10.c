
# include <stdio.h>


typedef struct Complex
{
  float real ;
  float imag ;
}complex;

complex input_complex()
{
  complex a;
  printf(" enter real part:");
  scanf("%f",&a.real);
  printf("enter imaginary part:");
  scanf("%f",&a.imag);
  return a;
}
complex add(complex a,complex b)
{
  complex sum;
  sum.real = a.real + b.real ;
  sum.imag = a.imag + b.imag ;
  return sum;
}
void output(complex a,complex b,complex c){
    
  c = add(a,b);
  printf(" sum  %f + %fi + %f +%fi is %f +%fi \n",a.real,a.imag,b.real,b.imag,c.real,c.imag);
}
int main()
{
  complex p1,p2,p3;
  p1 = input_complex();
  p2 = input_complex();
  add(p1,p2);
  output(p1,p2,p3);
  return 0;
}
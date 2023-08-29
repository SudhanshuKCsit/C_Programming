
# include <stdio.h>

 typedef struct _complex
{
	float real , imag ;
}complex;


complex input_complex(); 
complex add(complex a, complex b);
void output(complex a, complex b, complex sum);

complex input_complex(){
   
   complex a;
   printf(" Enter real value :");
   scanf("%f",&a.real);
   printf(" Enter img value :");
   scanf("%f",&a.imag);
   return a ;
}

complex add(complex a ,complex b){

    complex add;
    add.real = a.real + b.real ;
    add.imag = a.imag + b.imag ;
    return add ;
}

void output(complex a,complex b,complex c){
    
    c = add(a,b);
    printf(" sum  %f + %fi + %f +%fi is %f +%fi \n",a.real,a.imag,b.real,b.imag,c.real,c.imag);
}

int main(){
    
    complex a , b ;
    a = input_complex();
    b = input_complex();
    complex c = add(a,b);
    output(a,b,c) ;
    return 0 ;
}

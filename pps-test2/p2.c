
/*
Write a program to find the weight of the camel given height, length and stomach radius using four functions
>   weight = pi * stomach_raduius^3 * sqrt(height * length)
*/

# include <stdio.h>
# include <math.h>

void input_camel_details(float *radius, float *height, float *length){
    printf(" Enter radius : ");
    scanf("%f",radius);
    printf(" Enter height : ");
    scanf("%f",height);
    printf(" Enter length : ");
    scanf("%f",length);
}
float find_weight(float radius, float height, float length){

    float weight = 3.14 * pow(radius,3) * sqrt(height * length);
    return weight;
}
void output(float radius, float height, float length, float weight){
    
    printf(" weight of camel %0.2f ,%0.2f and %0.2f is :%0.2f \n",radius,height,length,weight) ;

}
int main() {

    float a, b , c , d ;
    input_camel_details(&a,&b,&c);
    d = find_weight(a,b,c);
    output(a,b,c,d);
    return 0 ;
}
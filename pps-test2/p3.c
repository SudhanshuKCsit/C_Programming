
# include <stdio.h>
# include <math.h>

typedef struct _camel{
    float radius , height , length , weight ; 
} camel ;
camel input(){
    camel a ;
    printf(" Enter radius :");
    scanf("%f",&a.radius);
    printf(" Enter height :");
    scanf("%f",&a.height);
    printf(" Enter length :");
    scanf("%f",&a.length);
    return a ;
}
void find_weight(camel *c){

    c->weight = 3.14 * pow(c->radius,3) * sqrt(c->height * c->length);

}

/*float find_weight(camel c){

    float weight = 3.14 * pow(c.radius,3) * sqrt(c.height * c.length);
    return weight;
}*/
void output(camel c){

    printf(" weight of camel %0.2f ,%0.2f and %0.2f is :%0.2f \n",c.radius,c.height,c.length,c.weight);
}
int main() {
    camel c  ;
    c = input();
    find_weight(&c);
    //c.weight = find_weight(c);
    output(c);
    return 0;
}
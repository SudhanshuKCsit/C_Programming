
# include <stdio.h>

int input_side() {
    
    int n;
    printf(" Enter the side of the traingle :\n");
    scanf("%d",&n);
    return n;
}

int check_scalene(int a , int b , int c ) {
    if( a!=b && b!=c && c!=a)
    return 1;
    else 
    return 0;
}

void output(int a, int b, int c, int isscalene){

    if(isscalene == 1){
        printf(" The triangle with sides %d , %d and %d is scalene \n", a , b , c);
    }else{
        printf(" The triangle with sides %d , %d and %d is not scalene \n", a , b , c);
    }
}

int main(){
    int isscalene;
    int a = input_side();
    int b = input_side();
    int c = input_side();
    check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0 ;
}
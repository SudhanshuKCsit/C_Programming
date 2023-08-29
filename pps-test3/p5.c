
# include <stdio.h>

int input(){
    int n;
    printf(" Enter value for a :");
    scanf("%d",&n);
    return n;
}

int find_gcd(int a, int b){

    if (b == 0)
        return a;
    return find_gcd(b, a % b); 
}

void output(int a, int b, int gcd){

    printf(" hcf of %d and %d num is : %d\n", a , b ,gcd) ;
}

int main () {
    int a , b , gcd ;
    a = input();
    b = input();
    gcd = find_gcd(a , b );
    output(a,b,gcd);
    return 0 ;
}
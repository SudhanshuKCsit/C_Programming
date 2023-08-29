
# include <stdio.h>

int input_number(){

    int n;
    printf(" Enter value :\t");
    scanf("%d",&n);
    return n;

}
int is_composite(int n){

    int i ;
    for ( i = 2 ; i < n/2 ; i++)
    if((n%2)==0){
        return 0;
    }else 
    return 1;
}
void output(int n, int result){
    if(result == 0)
    printf(" %d is a composite number.\n",n);
    else
    printf(" %d is a composite number.\n",n);
}
int main() {

    int n , x ;
    n = input_number();
    x = is_composite(n);
    output( n , x);
    return 0 ;
}
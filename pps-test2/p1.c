
# include <stdio.h>
# include <math.h>

struct _point{
  float x;
  float y;
};
typedef struct _point point;
  
point input(){

  point a ;
  printf(" Enter value of x :");
  scanf("%f",&a.x);
  printf(" Enter value of y :");
  scanf("%f",&a.y);
  return a;
}
void dist(point a, point b, float *res){

  *res = sqrt(pow(b.x - a.x,2) + pow(b.y - a.y,2));
}
void output(point a, point b, float res){

  printf(" Distanace is :%f\n",res);

}
int main(){

  point a,b;
  float res ;
  a = input();
  b = input();
  dist(a,b,&res);
  output(a,b,res);
  return 0 ;
}
1.  Write a program to find distance between two points.

```c  
  struct _point
  {
      float x;
      float y;
  };
  typedef struct _point Point;
  
  void input(Point *a, Point *b);
  void dist(Point a, Point b, float *res);
  void output(Point a, Point b, float res);
```
>*input*:<br>1.0 1.0<br>2.0 2.0<br><br>*output*:<br>The distance b/w (1.0, 1.0) and (2.0, 2.0) is 1.0
 
2.  Write a program to find the weight of the camel given height, length and stomach radius using four functions
>   weight = pi * stomach_raduius^3 * sqrt(height * length)

```c
    void input_camel_details(float *radius, float *height, float *length);
    float find_weight(float radius, float height, float length);
    void output(float radius, float height, float length, float weight); 
```

>*input*:<br>1<br>1<br>1<br><br>*output*:<br>The weight of the camle with radius: 1.0, height: 1.0, length: 1.0 is 3.1415

Expression, Functions and Structures. 
Write a program to find the weight of the camel given height, length and stomach radius. weight = pi _ stomach_raduius3 _ sqrt(height _ length).
using four functions and following function signatures. 5 marks struct camel { float radius, height, length,weight; }; typedef struct camel Camel;
Camel input(); / do not take weight as input from the user / float find_weight(Camel c); / pass by value / or void find_weight(Camel c); /passing
address variable _/ void output(Camel c); and int main() 
if then else statements 
When a camel is 
a) sick its stomach_radius is less than height and less than length. b) happy its height is less than length and less than stomach_radius. c) tense its length
is less than height and stomach_radius. 
Write a program to find whether a camel is sick, happy, or tense. With functions and structure - 5 marks. 
Loops and sequences 
Write a program to find borgax given x. The formula for finding borgax 
1 + x/3! + x2/5! + x3/7! ..... 
stop when the next term is less 0.000001, With four functions. 
Array processing With functions. use following function prototypes. void input(int n, int a[n]); float oddaverage(int n, int a[n]); void output(int n, int a[n]); /
print all the elements of the array and then the average _/ and main. 
Strings Write a program to find if the name of the camel is a nice name. Camels name is nice if it has at least 2 vowels and 2 consonants in it. with four
functions - 5 marks. 
Array of Structures 
Write program to find the weight of a truck load of n camels. Take input a) truck weight and b) height, radius and length of n camels and compute the total
truck weight. ( Truck weight + weight of the camels) With functions - 5 marks. 
Call functions from earlier programs where required. float input_truck_weight(); int input_no_camels(); void input_camel_details(int n, Camel c[n]); float
comput_total_weight(int n, Camel c[n], float truck_weight); void ouput(float total_truck_weight); and int main(

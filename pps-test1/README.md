1.	Write a program to print your name
2.	Write a program to Add two numbers
3.	Write a program to Add two number using 4 functions **Pass by value**

```c
    int input();
    int add(int a, int b);
    void output(int a, int b, int sum);
```

>input:<br>1<br>2<br>output:<br>sum of 1+2 is 3    
	
4.	Add two numbers using 4 functions **Pass by reference**

```c
    void input(int *a, int *b);
    void add(int a, int b, int *sum);
    void output(int a, int b, int sum);
```    

>input:<br>1<br>2<br>output:<br>sum of 1+2 is 3

<br> 5.	Write a program to Compare 3 numbers using 4 functions
	<br> a.	Pass by value	     //int cmp(int a, int b, int c) -> int input ()
	<br> b.	Pass by reference //void cmp(int a, int b, int c, int *large); -> void input (int *a, int *b)
<br> 6.	Write a program to find Sum of n numbers
	<br> a.	Sum of n numbers 
	<br> int input_n();
	<br> int sum_n(int n);
	<br> void output(int n, int sum);
	<br> input: 
	<br> 5
	<br> output:
	<br> 1+2+3+4+5 is 15
	Function Prototypes:
<br> 7.	Write a program to find Sum of n different number
entered by the user
	<br> int input_array_size();
	<br> void input_array(int n, int a[n]);
	<br> int sum_n_arrays(int n, int a[n]);
	<br> void out_put(int n, int a[n], int sum);
	<br> input:
	<br> 1 7 11
	<br> output:
	<br> 1+7+11 is 19
<br> 8. Write a program to find the square root of a number.
	<br> float input();
	<br> float my_sqrt(float n);
	<br> void output(float n, float sqrt_result);
	
<br> 9.	Write a program to Compare two strings
	<br> void input_two_string(char *a, char *b);
	<br> int strcmp(char *a, char *b);
	<br> void output(char *a, char *b, int result);
	<br> input:
	<br> hello 
	<br> world
	<br> output:
	<br> world is greater than hello
	
<br> 10. Write a program to find Sum of two complex numbers
	struct _complex
	{
	<br> 	float real,imaginary;
	};<br> 
	ty<br> pedef _complex Compl<br> <br> <br> <br> <br> <br> world
	Complex input_chellox(); 
	Complex add(Complex a, Complex b);
	void output(Complex a, Complex b, Complex c);
	input:
	2 3
	4 5
	output:
	2 + 3i + 4 + 5i is 6 + 8i

<br> 11. Write a program to find Sum of n complex numbers

	struct _complex
	{
		float real,imaginary;
	};
	typedef _complex Complex;
	int get_n();
	Complex input_complex();
	void input_n_complex(int n, Complex c[n]);
	Complex add(Complex a, Complex b);
	Complex add_n_complex(int n, Complex c[n]);
	void output(int n, Complex c[n], Complex result);
	input:
	2
	2 3
	4 5
	output:
	2 + 3i 
	+ 4 + 5i 
	is 
	6 + 8i



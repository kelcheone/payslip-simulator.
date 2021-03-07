#include<stdio.h>
#include<math.h> // math module.
int main(){
	double number, square, square_root;
	printf("Enter a number:\n");
	scanf("%lf", &number);
	square = number * number;
	square_root = sqrt(number);
	printf("Square = %0.2lf\n",square );
	printf("Square root = %0.2lf\n",square_root );
}



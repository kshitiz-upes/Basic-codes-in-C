#include<stdio.h>
int main()
{
	float c = 0.0, f;
	scanf("%f", &f);
	printf("f is: %.2f\n", f);
	c = 5*(f-32)/9;
	printf("temperature in celsius is: %3.2f\n", c);
	return 0;
}
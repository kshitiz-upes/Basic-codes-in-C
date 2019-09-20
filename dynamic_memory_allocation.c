/* c programme to create memory for int, char and float variable at run time. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a;
	char *b;
	float *c;

	a=(int *)malloc(1*sizeof(int));
	b=(char *)malloc(1*sizeof(char));
	c=(float *)malloc(1*sizeof(float));

	printf("enter integer value: ");
	scanf("%d", a);

	printf("enter character value: ");
	scanf("%c", b);

	printf("enter float value: ");
	scanf("%f", c);

	printf("%d, %c, %.1f", *a, *b, *c);

	free(a);
	free(b);
	free(c);

	return 0;
 
}
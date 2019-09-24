#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,i;
    int a1,a2,a3,a4,a5,sum=0;
    scanf("%d", &n);
    a1=n%10;
    a2=(n%100)/10;
    a3=(n%1000)/100;
    a4=(n%10000)/1000;
    a5=n/10000;
    sum= a1+a2+a3+a4+a5;
    printf("%d",sum);
    
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}


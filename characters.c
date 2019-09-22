#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[20];
    char s1[200];

    scanf("%c", &ch);
    printf("%c\n",ch);
    scanf("%s",s);
    printf("%s\n",s);
    scanf("\n");
    scanf("%[^\n]%*c", &s1);
    printf("%s",s1);
    return 0;
}


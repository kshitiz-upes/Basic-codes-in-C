#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
    for(i=a;i<=b;i++)
    {
        if(i>9)
        {
            if(i%2!=0)
            printf("odd\n");
            else
            printf("even\n");
        }
        else
        if(i<9)
        {
            if(i<8)
            {
                if(i<7)
                {
                    if(i<6)
                    {
                        if(i<5)
                        {
                            if(i<4)
                            {
                                if(i<3)
                                {
                                    if(i<2)
                                    printf("one\n");
                                    else
                                    printf("two\n");
                                }
                                else
                                printf("three\n");
                            }
                            else
                            printf("four\n");
                        }
                        else
                        printf("five\n");
                    }
                    else
                    printf("six\n");
                }
                else
                printf("seven\n");
            }
            else
            printf("eight\n");
        }
          else
          printf("nine\n");
    }
    return 0;
}


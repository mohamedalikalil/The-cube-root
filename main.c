#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;

    printf("Square Root Function");
    printf("Enter number = ");
    scanf("%d",&i);

    for(x=0;x*x*x<i;x++){}

    {
        printf("\n Square Root Function of %d = %d",i,x);
        }
        }

#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void main()
{
    int fhar;

    for(fhar = LOWER; fhar <= UPPER; fhar += STEP)
        printf("%3d %6.1f \n",fhar,(5.0/9.0)*(fhar-32.0));
        
}
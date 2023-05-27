#include <stdio.h>

///
///ex1_5 fhar to celsius Using "for"
///
int main(void)
{
    int fhar;

    for(fhar = 300; fhar >= 0; fhar -= 20)
        printf("%3d %5.1f \n",fhar,(5.0/9.0)*(fhar-32.0));
    
}
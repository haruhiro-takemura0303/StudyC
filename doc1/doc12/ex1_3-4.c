#include <stdio.h>

///
/// Fahr to Celsius
///
int main()
{
    // inti param
    int upper = 300;
    int lower = 0;
    int step = 20;

    //define value
    float celsius;
    float fahr;

    celsius = lower;

     printf("Caluculate Celsius to Fahr\n");
    while(celsius <= upper){
        //calculate
        fahr = (9.0/5.0)*celsius + 32.0;
        
        //print
        printf("%3.0f%7.2f\n",celsius,fahr); 

        celsius += step;
    }
}
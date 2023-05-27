#include <stdio.h>

int main()
{
    ///
    /// Caluclate using int format
    ///
    int fahr, celsius;
    int lower, upper, step;

    printf("Using int\n");
    lower = 0;  //min value of fahr
    upper = 300;    //max value of fahr
    step = 20;  //step value

    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr - 32) / 9; //not 5/9 *~ . 5/9 is calculated as 0.
        printf("%3d%6d\n", fahr, celsius);
        fahr = fahr + step;
    }

    ///
    ///Calculate Using Float
    ///

    //Init Param
    lower = 0;  //min value of fahr
    upper = 300;    //max value of fahr
    step = 20;  //step value

    //define float
    float fahrF, celsiusF;

    printf("\nUsing float");
    fahrF = lower;
    while(fahrF <= upper){
        celsiusF = (5.0/9.0) * (fahrF - 32);
        printf("%3.0f%6.1f\n", fahrF, celsiusF);
        fahrF = fahrF + step;
    }
}
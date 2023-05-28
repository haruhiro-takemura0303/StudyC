#include<stdio.h>

///
///Count Number of char
///
void main()
{
    int nc;

    nc = 0;
    while(getchar()!=EOF)
        ++nc;
    printf("%d\n",nc);
}


///
///Count Number of char
///
/*
void main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;

    printf("%.0f\n",nc);
}
*/
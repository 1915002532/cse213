/*  List all float and double data types name , format specifier and memory size in byte including modifiers..
    Rakibul Hasan Emon
    ID.1915002532
*/
#include <stdio.h>
int main()
{
    float a=10.21;
    double b=20.25;
    long double c=20.554;

    printf("Print value using format specifier ");
    printf("\nfloat : %.2f ",a);
    printf("\ndouble : %.2lf ",b);
    printf("\nlong double : %.2Lf \n",c);

    printf("\nMemory size in byte ");
    printf("\nfloat : %d ",sizeof (a));
    printf("\ndouble : %d ",sizeof (b));
    printf("\nlong double : %d ",sizeof (c));

    printf("\n");

    return 0;
}


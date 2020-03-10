#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float potega(int n,int m)
{
    if( n>0 && m>0 && m!=0 )
    {
        return pow(n,m);
    }

}

int main()
{
    float liczba1,liczba2;
    scanf("%f",&liczba1);
    scanf("%f",&liczba2);

    printf("%f",potega(liczba1,liczba2));

    return 0;
}

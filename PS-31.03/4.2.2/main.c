#include <stdio.h>
#include <stdlib.h>

float foo(int n, int tab[])
{
    float temp = 0;
    for(int i=0;i<n;i++)
    {
        temp+=tab[i];
    }
    temp/=n;
    return temp;
}

float foo2(int n, int *tab)
{
    float temp = 0;
    for(int i=0;i<n;i++)
    {
        temp+=*(tab+i);
    }
    temp/=n;
    return temp;
}

int main()
{
    int tablica[] = {3,4,5,6,1};
    printf("%f",foo2(5,tablica));
    return 0;
}

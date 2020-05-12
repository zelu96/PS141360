#include <stdio.h>
#include <stdlib.h>

void wyswietlLiczby(unsigned int n, unsigned int m, unsigned int k)
{
    int pom = 2*n+1;
    while(pom <+3*m)
    {
        if(pom%k==0)
            printf("%d, ",pom);
        pom++;
    }
}


int main()
{
    wyswietlLiczby(2,8,3);
    printf("\n\n");

    wyswietlLiczby(1,4,2);
    printf("\n\n");

    return 0;
}

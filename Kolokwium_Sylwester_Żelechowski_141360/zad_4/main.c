#include <stdio.h>
#include <stdlib.h>

float *nonArgument()
{
    float *tab = malloc(sizeof(float)*3);
    {
        *(tab+1)= -1.4;
        *(tab+2)=  2.7;
        *(tab+3)=  3.2;
    }

}

int main()
{
    printf("%f %f %f", *nonArgument(),*(nonArgument()-1),*(nonArgument)-2);
    return 0;
}

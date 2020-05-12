#include <stdio.h>
#include <stdlib.h>

void foo(int* tab, int n)
{
    for(int i=0;i<n-2;i++)
    {
        *(tab+i)+=3;
    }
}

int main()
{
    int tab[] = {9,2,-9,-2,9,2};
    int *wsk=tab-2;
    foo(wsk,5);
    int b = *(wsk+=4); //b=-9
    int c = b+2; // b= -9 , c=-7
    int d = b^c; // b=-9  , c= -7 , d= 14
    int e = (wsk+=-1)[2]; // b= -9  , c= -7  , d= 14 , e= -2
    e = (d *= 8) + (c /= 3); // b= -9 , c= -2 , d= 112 , e= 110
    c = d - (b+=8); // b= -1 , c= 113 , d= 112 , e= 110
    b = *wsk + e; // b= 112 , c= 113 , d= 112 , e= 110
    return 0;
}

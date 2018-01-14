#include <stdio.h>
#define SIZE 4
int main(void)
{
    short dates[SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;
    pti = dates;
    ptf = bills;
    printf("%23s %16s\n", "short", "double");
    for (index = 0; index < SIZE; index++)
        printf("pointers + %d: %16p %16p\n",
               index, pti + index, ptf + index);
    return 0;
}
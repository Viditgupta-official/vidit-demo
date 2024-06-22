#include<stdio.h>

void swap(int* a, int* b);

int main()

{
    int p = 3, q = 5;
    swap(&p , &q);
    return 0;
}

void swap(int* a, int* b)
{
    int x = *a;
    *a = *b;
    *b = x;
    printf("\nValue of p = %d and q = %d", *a ,*b);
}


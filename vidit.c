#include<stdio.h>

float areaperi(int, float *, float *);

int main()

{
    int radius;
    float area, perimeter;

    printf("\nEnter radius of circle : ");
    scanf("%d", &radius);
    areaperi(radius, &area, &perimeter);

    printf("Area of circle is %f\n", area);
    printf("Perimeter of circle is %f", perimeter);
}

float areaperi(int r, float* *a, float* *p)

{
    *a = 3.14*r*r;
    *p = 2*3.14*r;

    return *a;
    return *p;
}
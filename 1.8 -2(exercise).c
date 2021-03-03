#include <stdio.h>
float convert (float x);
int main()
{
    float a,b;
    printf("enter number of dollars: ");
    scanf("%f",&a);
    b=convert(a);
    printf("in pounds: %f",b);
    return 0;
}
float convert (float x)
{
    return x/2;
}

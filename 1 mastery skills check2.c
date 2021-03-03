#include <stdio.h>
float o_to_c(float a);
int main()
{
    float o,c;
    printf("Enter number of ounces: ");
    scanf("%f",&o);
    c=o_to_c(o);
    printf("number of cups: %f",c);
    return 0;
}
float o_to_c(float a)
{
    return a/8;
}

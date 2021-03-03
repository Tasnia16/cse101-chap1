#include <stdio.h>
int get_sqrt();
int main ()
{
    int sqr;
    sqr=get_sqrt();
    printf("square: %d",sqr);
    return 0;
}
int get_sqrt()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    return num*num;
}

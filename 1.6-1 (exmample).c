/* this program converts earth days to jovian years */
#include<stdio.h>
int main ()
{
    float e_days; /* number of earth days */
    float j_years;/* equivalent number of jovian years */
    /* get number of earth days */
    printf("Enter number of earth days: ");
    scanf("%f", &e_days);
    /* compute jovian years */
    j_years=e_days/(365*12);
    /* display answer */
    printf("Equivalent Jovian years: %f", j_years);

    return 0;
}

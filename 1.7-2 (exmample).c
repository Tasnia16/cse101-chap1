/* this program has 3 functions */
#include <stdio.h>
void func1();  /* prototypes */
void func2();
int main ()
{
    func2();
    printf(" 3");
    return 0;
}
void func2()
{
    func1();
    printf(" 2");
}
void func1()
{
    printf("1");
}

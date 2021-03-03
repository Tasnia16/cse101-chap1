#include <stdio.h>
void func1();
void func2();
int main ()
{
    func2();
    printf("the sunshine patriot");
    return 0;
}
void func2()
{
    func1();
    printf(",");
}
void func1()
{
    printf("The summer soldier");
}


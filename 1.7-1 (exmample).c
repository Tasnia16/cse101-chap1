/* a program with functions */
#include<stdio.h>
void func1(); /* prototype for func1() */
int main ()
{
    printf("I ");
    func1();
    printf("C");
    return 0;
}
void func1()
{
    printf("like ");
}

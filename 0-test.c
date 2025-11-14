#include <stdarg.h>
#include<stdio.h>

int max(int first, ...)
{
    va_list arg;
    int sum = 0;
    int x;
    va_start(arg, first);
    while ((x = va_arg(arg, int)) > 0)
    {
        sum += x; 
    }
    va_end(arg);
    return sum;
}

int main()
{
    printf("%d", max(1, 5, 7, 8, 9));
}
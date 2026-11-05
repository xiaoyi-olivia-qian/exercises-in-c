#include <stdio.h>
#include <limits.h>

void print_ranges();

int main()
{
    print_ranges();

    return 0;
}

void print_ranges()
{   
    printf("char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("char: 0 to %u\n", UCHAR_MAX);
    putchar('\n');
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("short: %d to %u\n", 0, USHRT_MAX);
    putchar('\n');
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("int: %d to %u\n", 0, UINT_MAX);
    putchar('\n');
    printf("long: %d to %ld\n", LONG_MIN, LONG_MAX);
    printf("long: %d to %lu\n", 0, ULONG_MAX);
    putchar('\n');
    printf("llong: %d to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("llong: %d to %llu\n", 0, ULLONG_MAX);
}
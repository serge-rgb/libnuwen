#include "dummy_include.h"

struct MyStruct
{
    int x;
};

typedef struct
{
    void* something;
} OhGodNo;

struct IgnoreMe  // This was declared earlier.
{
    void* nothing;
};

enum
{
    zero,
    one,
};

int main()
{
    int foo = 1;
    struct MyStruct bar = { 0 };
    OhGodNo a = { 0 };
    OhGodNo b;

    ThisIsAlsoACharButItIsVeryUnpracticallyNamed c = 'x';

    a.something = 0;
    bar.x = 2;

    if (bar.x == 2)
    {
        printf("function call %s %d\n", "with an argument", 2);
    }
    else
    {
        bar.x = 42;
    }

    while (0)
    {

    }

    const int not_useful = 0;
    do {
        // Nothing!
        /* Seriously, nothing // */
        float inside_do = 1729;
    } while (not_useful);
    ++foo;
    --foo;

    static const struct Named i_can_parse_this = { 0 };
    static const struct IgnoreMe i_can_parse_this_too = { 0 };


    printf("Hi there!");
}

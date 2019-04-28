#include "fib.h"

int fib_rec(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    }

    return fib_rec(n - 1) + fib_rec(n - 2);
}

int iter_f(int product, int counter, int max_count)
{
    if (counter > max_count) {
        return product;
    }

    return iter_f(product * counter, counter + 1, max_count);
}

int fib_iter(int n)
{
    return iter_f(1, 1, n);
}
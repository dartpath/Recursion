#include "fib.h"

int fib_rec(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    }

    return fib_rec(n - 1) + fib_rec(n - 2);
}

int iter_f(int fib1, int fib2, int counter)
{
	if (counter < 0) {
		return fib2;
	}
	return iter_f(fib2, fib1 + fib2, counter - 1);
}

int fib_iter(int n)
{
	return iter_f(1, 1, n - 2);
}
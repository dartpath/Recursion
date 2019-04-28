#include "sum.h"

int sum_rec(int *arr, int size)
{
    if (size > 0) {
        return *arr + sum_rec(arr + 1, size - 1);
    } else {
        return 0;
    }
}

int iter(int product, int counter, int *arr)
{
    if (counter == 0) {
        return product;
    }

    return iter(product + *arr, counter - 1, arr + 1);
}

int sum_iter(int *arr, int size)
{
    return iter(0, size, arr);
}

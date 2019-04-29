#include <stdlib.h>
#include "itos.h"

int num_of_dig(int num)
{
    int k = 0;
    while (num > 0) {
        num /= 10;
        k++;
    }
    return k;
}

char *int_to_str(int num)
{
    if (num > 0) {
        int k = num_of_dig(num);
        char *strnum = malloc(k * sizeof(char));
        for (int i = k - 1; i >= 0; i--) {
            strnum[i] = (num % 10) + '0';
            num /= 10;
        }
        return strnum;
    } else {
        return "0";
    }
}
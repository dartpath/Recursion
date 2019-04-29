#include <stdlib.h>
#include "itos.h"

int num_of_dig(int num)
{
    int k = 0;
    while (num != 0) {
        num /= 10;
        k++;
    }
    return k;
}

char *int_to_str(char *str, int num, int dig)
{
    if (dig <= 0) {
        return str;;
    } 
    if (str[dig - 2] == '-') {
        str[dig - 1] = (num % 10) + '0';
        return str;;
    } 
    if (num < 0) {
        str[0] = '-';
        str = realloc(str, num_of_dig(num) * sizeof(char) + 1);
        return int_to_str(str, num * (-1), dig + 1);
    } 
    str[dig - 1] = (num % 10) + '0';
    return int_to_str(str, num / 10, dig - 1);
}
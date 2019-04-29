#include <stdio.h>
#include <stdlib.h>
#include "sum/sum.h"
#include "fib/fib.h"
#include "itos/itos.h"

int main() 
{
    //Функции для вычисления суммы элементов массива
    printf("Сумма всех элементов массива\n");

    int size = -1;
    while(size < 0) {
        printf("Введите размер массива(неотрицательное число): ");
        scanf("%d", &size);
    }

    if(size > 0) {
        int arr[size];
        printf("Введите элементы массива через пробел: ");
        for(int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

        printf("Сумма элементов массива(рекурсивная): %d\n", sum_rec(arr, size));
        printf("Сумма элементов массива(итеративная): %d\n", sum_iter(arr, size));
    } else {
        printf("Сумма элементов массива с размером 0: 0\n");
    }

    //Функции вычисления n-ного числа Фибоначчи
    printf("\nПоиск n-ного числа Фибоначчи\n");

    int n = -1;
    while(n < 0) {
        printf("Введите номер числа: ");
        scanf("%d", &n);
    }
    printf("Число Фибоначчи(рекурсивная): %d\n", fib_rec(n));
    printf("Число Фибоначчи(итеративная): %d\n", fib_iter(n));
        
    //Функция преобразования числа в строку
    printf("\nПеревод числа в строку\n");

    int num;
    printf("Введите число: ");
    scanf("%d", &num);

    if (num > 0) {
        char *str = int_to_str(num);
        printf("Полученная строка: %s\n", str);
        free(str);
    } else {
        printf("Полученная строка: 0\n");
    }
    return 0;
}
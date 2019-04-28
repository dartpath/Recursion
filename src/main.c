#include<stdio.h>
#include "sum.h"

int main() 
{
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
    return 0;
}
#include <stdio.h>

int main() {
    int a = 1, b = 2;
    // Массив из 2-х указателей на int
    int *arrOfPtrs[2] = {&a, &b}; 
    
    int arr[3] = {10, 20, 30};
    // Указатель на массив из 3-х int
    int (*ptrToArr)[3] = &arr; 
    
    printf("arrOfPtrs[0]: %d\n", *arrOfPtrs[0]);
    printf("ptrToArr[0][1]: %d\n", (*ptrToArr)[1]); // 20
    return 0;
}

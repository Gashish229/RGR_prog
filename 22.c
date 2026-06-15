#include <stdio.h>

int main(void) {
    float f1 = 3.5f;
    float f2 = 2.4f;
    double d = 10.5; // (Объявлено по условию задачи)
    
    // f1 + f2 = 5.9f. При записи в int дробная часть .9 отсекается.
    int result = f1 + f2; // Результат: 5

    printf("Результат сложения во float: %f\n", f1 + f2);
    printf("Результат, записанный в int: %d\n", result);
    return 0;
}
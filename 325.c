#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int min;
    int max;
    float avg;
} AnalysisResult;

AnalysisResult *analyze_array(const int *arr, int size) {
    AnalysisResult *res = (AnalysisResult *)malloc(sizeof(AnalysisResult));
    if (res == NULL) return NULL;

    res->min = arr[0]; res->max = arr[0];
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < res->min) res->min = arr[i];
        if (arr[i] > res->max) res->max = arr[i];
        sum += arr[i];
    }
    res->avg = (float)sum / size;
    return res; // Возвращаем адрес из кучи
}

int main(void) {
    int array[] = {10, 20, 30, 40};
    AnalysisResult *report = analyze_array(array, 4);

    if (report != NULL) {
        printf("Min: %d, Max: %d, Avg: %.1f\n", report->min, report->max, report->avg);
        free(report); // Очистка структуры
    }
    return 0;
}

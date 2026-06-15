#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *buffer;
    int head;
    int tail;
    int size;
} CircularBuffer;

void cb_push(CircularBuffer *cb, int val) {
    cb->buffer[cb->tail] = val;
    cb->tail = (cb->tail + 1) % cb->size; // Циклический сдвиг по модулю размера
}

int main(void) {
    CircularBuffer cb = {.head = 0, .tail = 0, .size = 3};
    cb.buffer = (int *)malloc(cb.size * sizeof(int));
    if (cb.buffer == NULL) return 1;

    cb_push(&cb, 100); cb_push(&cb, 200);
    printf("Элемент циклического буфера: %d\n", cb.buffer[cb.head]);

    free(cb.buffer);
    return 0;
}

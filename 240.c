#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int head;
    int tail;
    int count;
    int max_size;
} Queue;

void enqueue(Queue *q, int val) {
    if (q->count < q->max_size) {
        q->data[q->tail] = val;
        q->tail = (q->tail + 1) % q->max_size; // Кольцевой сдвиг индекса
        q->count++;
    }
}

int dequeue(Queue *q) {
    if (q->count == 0) return -1;
    int val = q->data[q->head];
    q->head = (q->head + 1) % q->max_size;
    q->count--;
    return val;
}

int main(void) {
    Queue q = {NULL, 0, 0, 0, 3};
    q.data = (int *)malloc(q.max_size * sizeof(int));
    if (q.data == NULL) return 1;

    enqueue(&q, 10); enqueue(&q, 20);
    printf("Извлечен элемент FIFO: %d\n", dequeue(&q)); // Должен выведать 10
    printf("Извлечен элемент FIFO: %d\n", dequeue(&q)); // Должен выведать 20

    free(q.data);
    return 0;
}

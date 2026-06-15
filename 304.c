#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
} Queue;

void enqueue(Queue *q, int val) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL) return;
    new_node->value = val;
    new_node->next = NULL;
    if (q->tail == NULL) {
        q->head = q->tail = new_node;
    } else {
        q->tail->next = new_node;
        q->tail = new_node;
    }
}

int dequeue(Queue *q) {
    if (q->head == NULL) return -1;
    Node *temp = q->head;
    int val = temp->value;
    q->head = q->head->next;
    if (q->head == NULL) q->tail = NULL;
    free(temp); // Освобождение динамического узла
    return val;
}

int main(void) {
    Queue q = {NULL, NULL};
    enqueue(&q, 10); enqueue(&q, 20);
    printf("FIFO извлечено: %d\n", dequeue(&q)); // 10
    // В реальном коде необходимо очистить остатки перед выходом
    while(dequeue(&q) != -1);
    return 0;
}

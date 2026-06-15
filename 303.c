#include <stdio.h>
#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top; // Индекс вершины стека
} Stack;

void push(Stack *s, int val) {
    if (s->top < MAX_SIZE - 1) {
        s->data[++(s->top)] = val; // Сдвиг вершины и запись
    }
}

int pop(Stack *s) {
    if (s->top == -1) return -1; // Стек пуст
    return s->data[(s->top)--];   // Возврат значения и сдвиг вниз
}

int main(void) {
    Stack s = {.top = -1}; // Инициализация пустого стека
    push(&s, 42); push(&s, 99);
    printf("Извлечено из стека (LIFO): %d\n", pop(&s)); // 99
    return 0;
}

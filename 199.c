#include <stdio.h>
#include <stddef.h>

#define CONTAINER_OF(ptr, type, member) \
    ((type *)((char *)(ptr) - offsetof(type, member)))

struct Node {
    int data;
    int key;
};

int main() {
    struct Node n = {10, 42};
    int *key_ptr = &n.key;
    
    // Получаем указатель на структуру Node через указатель на её поле key
    struct Node *n_ptr = CONTAINER_OF(key_ptr, struct Node, key);
    
    printf("Данные структуры: %d\n", n_ptr->data);
    return 0;
}

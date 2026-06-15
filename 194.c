#include <stdlib.h>

struct DNode { int data; struct DNode* next; struct DNode* prev; };

void deleteNode(struct DNode** head, struct DNode* del) {
    if (*head == NULL || del == NULL) return;
    if (*head == del) *head = del->next;
    if (del->next != NULL) del->next->prev = del->prev;
    if (del->prev != NULL) del->prev->next = del->next;
    free(del);
}

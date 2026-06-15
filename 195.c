#include <stdlib.h>

struct CNode { int data; struct CNode* next; };

void addCircular(struct CNode** head, int val) {
    struct CNode* newNode = malloc(sizeof(struct CNode));
    newNode->data = val;
    
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
    } else {
        struct CNode* temp = *head;
        while (temp->next != *head) temp = temp->next;
        temp->next = newNode;
        newNode->next = *head;
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User { int id; char name[20]; };

int compareUsers(const void *a, const void *b) {
    return ((struct User*)a)->id - ((struct User*)b)->id;
}

int main() {
    struct User users[] = {{1, "Alice"}, {2, "Bob"}, {5, "Charlie"}};
    struct User key = {2, ""}; // Ищем по ID
    
    struct User *res = bsearch(&key, users, 3, sizeof(struct User), compareUsers);
    
    if (res != NULL) printf("Найден пользователь: %s\n", res->name);
    return 0;
}

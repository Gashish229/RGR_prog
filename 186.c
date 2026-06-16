#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    double price;
    int quantity;
} Product;

int main() {
    int count = 2;
    Product **products = malloc(count * sizeof(Product*));
    
    for (int i = 0; i < count; i++) {
        products[i] = malloc(sizeof(Product));
        sprintf(products[i]->name, "Товар %d", i+1);
        products[i]->price = 100.5 * (i + 1);
        products[i]->quantity = 10 * (i + 1);
    }
    
    for (int i = 0; i < count; i++) {
        printf("%s: %.2f (В наличии: %d)\n", products[i]->name, products[i]->price, products[i]->quantity);
        free(products[i]);
    }
    free(products);
    return 0;
}

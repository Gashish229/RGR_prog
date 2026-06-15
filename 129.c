#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p1 = {"Ivan", 30}, p2;
    
    FILE *out = fopen("person.bin", "wb");
    if (out) {
        fwrite(&p1, sizeof(struct Person), 1, out);
        fclose(out);
    }
    
    FILE *in = fopen("person.bin", "rb");
    if (in) {
        fread(&p2, sizeof(struct Person), 1, in);
        printf("Загружено: %s, %d лет\n", p2.name, p2.age);
        fclose(in);
    }
    return 0;
}

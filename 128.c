#include <stdio.h>

int main() {
    int data[] = {1, 2, 3, 4, 5};
    int read_data[5];
    
    FILE *out = fopen("data.bin", "wb");
    if (out) {
        fwrite(data, sizeof(int), 5, out);
        fclose(out);
    }
    
    FILE *in = fopen("data.bin", "rb");
    if (in) {
        fread(read_data, sizeof(int), 5, in);
        fclose(in);
    }
    return 0;
}

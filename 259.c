#include <stdio.h>

int main() {
    int data_out = 42, data_in = 0;
    
    FILE *f_out = fopen("data.bin", "wb");
    fwrite(&data_out, sizeof(int), 1, f_out);
    fclose(f_out);
    
    FILE *f_in = fopen("data.bin", "rb");
    fread(&data_in, sizeof(int), 1, f_in);
    fclose(f_in);
    
    printf("Прочитано: %d\n", data_in);
    return 0;
}

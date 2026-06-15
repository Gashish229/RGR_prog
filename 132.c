#include <stdio.h>

int main() {
    FILE *in = fopen("in.txt", "r");
    FILE *out = fopen("out.txt", "w");
    if (!in || !out) return 1;
    
    char words[1000][50];
    int count = 0;
    
    while (fscanf(in, "%49s", words[count]) == 1) {
        count++;
    }
    
    for (int i = count - 1; i >= 0; i--) {
        fprintf(out, "%s ", words[i]);
    }
    
    fclose(in);
    fclose(out);
    return 0;
}

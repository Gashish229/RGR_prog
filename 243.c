#include <stdio.h>
#include <stdlib.h>

char *merge_strings(const char *s1, const char *s2) {
    int len1 = 0, len2 = 0;
    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    // Выделяем память под сумму длин строк + 1 байт для нуль-терминатора
    char *res = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (res == NULL) return NULL;

    int k = 0;
    for (int i = 0; i < len1; i++) res[k++] = s1[i];
    for (int i = 0; i < len2; i++) res[k++] = s2[i];
    
    res[k] = '\0'; // Финальное терминирование склеенной строки
    return res;
}

int main(void) {
    char s1[] = "Sibsutis_";
    char s2[] = "Revun";
    char *united = merge_strings(s1, s2);

    if (united != NULL) {
        printf("Конкатенация: %s\n", united); // "Sibsutis_Revun"
        free(united);
    }
    return 0;
}

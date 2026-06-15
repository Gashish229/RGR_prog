#include <stdio.h>
#include <sys/time.h>

int main() {
    struct timeval start, end;
    gettimeofday(&start, NULL);
    
    // Какая-то работа
    for (volatile int i = 0; i < 1000000; i++);
    
    gettimeofday(&end, NULL);
    long microsec = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);
    
    printf("Затрачено микросекунд: %ld\n", microsec);
    return 0;
}

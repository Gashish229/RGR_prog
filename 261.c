#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Это сообщение в буфере..."); 
    // Без \n текст не выведется сразу на экран. 
    // Чтобы принудительно вытолкнуть его из буфера:
    fflush(stdout); 
    
    sleep(2); 
    printf("\nПрошло 2 секунды.\n");
    return 0;
}

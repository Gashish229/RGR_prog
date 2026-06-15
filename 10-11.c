#include<stdio.h>
typedef enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Day;

int main(void)
{
    Day today = TUESDAY;
    if (today == TUESDAY)
    {
        printf("Вторник %d\n", today);
    }
    return 0;
}
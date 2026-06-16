#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    float average_score;
} Student;

int compare_students(const void *a, const void *b) {
    Student *s1 = (Student *)a;
    Student *s2 = (Student *)b;
    if (s1->average_score < s2->average_score) return 1; // по убыванию
    if (s1->average_score > s2->average_score) return -1;
    return 0;
}

int main() {
    Student students[] = { {"Анна", 4.2}, {"Борис", 4.8}, {"Влад", 3.9} };
    size_t count = sizeof(students) / sizeof(students[0]);
    
    qsort(students, count, sizeof(Student), compare_students);
    
    for (size_t i = 0; i < count; i++) {
        printf("%s: %.1f\n", students[i].name, students[i].average_score);
    }
    return 0;
}

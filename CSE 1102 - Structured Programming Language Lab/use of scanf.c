#include<stdio.h>

int main () {

    int marks_english;
    int marks_math;

    printf("Enter Marks of English and Math:");
    scanf("%d %d", &marks_english, &marks_math);

    int total_marks = marks_english + marks_math;
    printf("%d", total_marks);

    return 0;

}

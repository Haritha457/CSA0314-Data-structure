#include <stdio.h>

int main() {
    float marks[7], total_marks, percentage;
    int i;
    for(i=0; i<7; i++) {
        printf("Enter marks of subject %d: ", i+1);
        scanf("%f", &marks[i]);
    }
    total_marks = 0;
    for(i=0; i<7; i++) {
        total_marks += marks[i];
    }
    percentage = (total_marks / 700) * 100;
    char* division;
    if (percentage >= 80) {
        division = "Distinction";
    } else if (percentage >= 60 && percentage <= 79) {
        division = "First Division";
    } else if (percentage >= 45 && percentage <= 59) {
        division = "Second Division";
    } else if (percentage >= 32 && percentage <= 44) {
        division = "Third Division";
    } else {
        division = "Fail";
    }
    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f\n", percentage);
    printf("Division: %s\n", division);
    
    return 0;
}

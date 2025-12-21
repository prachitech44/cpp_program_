#include <stdio.h>

struct student {
    char name[50];
    int rollno;
    float percent;
};

int main() {
    struct student x[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter name, rollno and percent for student %d:\n", i+1);
        scanf("%s %d %f", x[i].name, &x[i].rollno, &x[i].percent);
    }

    printf("\n--- Student Details ---\n");

    for(i = 0; i < 5; i++) {
        printf("Name: %s  Rollno: %d  Percent: %.2f\n",
               x[i].name, x[i].rollno, x[i].percent);
    }

    return 0;
}
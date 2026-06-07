#include <stdio.h>

int main(void)
{
    int birth_year, current_year;

    printf("Enter birth year: ");
    if (scanf("%d", &birth_year) != 1) {
        return 1;
    }

    printf("Enter current year: ");
    if (scanf("%d", &current_year) != 1) {
        return 1;
    }

    int age = current_year - birth_year;
    if (age < 0) {
        printf("Invalid input: current year is before birth year\n");
        return 1;
    }

    printf("Age: %d\n", age);
    return 0;
}

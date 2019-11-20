#include <stdio.h>

main() {
    int i = 1, a = 1, year = 1900, countprint = 0;
    while (year <= 2000) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            for (i = 1;; i++) {
                printf("%d   ", year);
                countprint++;
                break;
            }
            if (countprint % 3 == 0)
                printf("\n");
        }
        year++;
    }
}

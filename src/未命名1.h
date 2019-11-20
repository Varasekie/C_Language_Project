#include <stdio.h>

main() {
    int i, grade;
    scanf("%d", &grade);
    i = grade / 10;
    switch (i) {
        case 10:
            printf("excellent");
            break;
        case 9:
            printf("great");
            break;
        case 8:
        defalt:
            printf("error");
    }
}

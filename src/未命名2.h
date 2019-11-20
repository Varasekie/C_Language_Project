#include <stdio.h>
#include<math.h>

main() {
    int i = 1;
    float a = 1, m = 0, temp = 1;
    while (fabs(a) >= 1e-4) {
        a = 1 / (float) i;
        m = m + a * temp;
        temp = -temp;
        i += 2;
    }
    printf("��=%10.8f", 4 * m);
}

//¹3
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int n = 3;
    int L = 2333;
    float res = (float)n / L;

    printf("Дано:\n");
    printf("%13d\n", n);
    printf("%13d\n", L);
    printf("--------------------\n");
    printf("Результат:\n");
    printf("%8c %+010.5f\n", ' ', res);

    return 0;
}


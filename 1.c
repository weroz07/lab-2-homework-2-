//№1
//#include <stdio.h>
//#include <locale.h>
//int main()
//{
//    setlocale(LC_CTYPE, "RUS");
//    printf("123\n");
//    printf("1\n2\n3\n");
//    printf("\t1\n\t\t2\n\t\t\t3\n");
//    printf("%1d\n%2d\n%3d\n", 1, 2, 3);
//    printf("%10.3f\n", 12.234657);
//    printf("%10.5f\n", 12.234657);
//    printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
//    printf("7 / 5 = %d\n", 7 / 5);
//    printf("2000 * 4 = %d\n", 2000 * 4);
//    printf("%g разделить %e равно %f\n", 5., 2000000., 5. / 2000000);
//    printf("%d разделить %d равно %d\n", 5., 2000000., 5. / 2000000);
//    printf("%f разделить %f равно %f\n", 5., 2000000., 5. / 2000000);
//    printf("%e разделить %e равно %e\n", 5., 2000000., 5. / 2000000);
//    return 0;
//}
//№2
//#include <stdio.h>
//#include <locale.h>
//
//int main()
//{
//    setlocale(LC_CTYPE, "RUS");
//    int n = 14;// *часики*
//    int k = 35;// *минутки*
//
//    printf("Текущее время %d час(ов), %d минут(ы), 00 секунд", n, k);
//
//    printf("\nВремя в минутах: %d минут", n * 60 + k);
//
//    printf("\nДо полуночи осталось %d часов и %d минут", 23 - n, 59 - k);
//
//    printf("\nС 8:00 прошло %d минут", (n - 8) * 60 + k);
//
//    printf("\nДоля часа = %d/24 часов и доля минуты = %d/60 минут", n, k);
//
//    return 0;
//}
//№3
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

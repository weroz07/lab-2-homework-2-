//�1
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
//    printf("������� �� ������� %d �� %d ����� %d\n", 5, 2, 5 % 2);
//    printf("7 / 5 = %d\n", 7 / 5);
//    printf("2000 * 4 = %d\n", 2000 * 4);
//    printf("%g ��������� %e ����� %f\n", 5., 2000000., 5. / 2000000);
//    printf("%d ��������� %d ����� %d\n", 5., 2000000., 5. / 2000000);
//    printf("%f ��������� %f ����� %f\n", 5., 2000000., 5. / 2000000);
//    printf("%e ��������� %e ����� %e\n", 5., 2000000., 5. / 2000000);
//    return 0;
//}
//�2
//#include <stdio.h>
//#include <locale.h>
//
//int main()
//{
//    setlocale(LC_CTYPE, "RUS");
//    int n = 14;// *������*
//    int k = 35;// *�������*
//
//    printf("������� ����� %d ���(��), %d �����(�), 00 ������", n, k);
//
//    printf("\n����� � �������: %d �����", n * 60 + k);
//
//    printf("\n�� �������� �������� %d ����� � %d �����", 23 - n, 59 - k);
//
//    printf("\n� 8:00 ������ %d �����", (n - 8) * 60 + k);
//
//    printf("\n���� ���� = %d/24 ����� � ���� ������ = %d/60 �����", n, k);
//
//    return 0;
//}
//�3
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int n = 3;
    int L = 2333;
    float res = (float)n / L;

    printf("����:\n");
    printf("%13d\n", n);
    printf("%13d\n", L);
    printf("--------------------\n");
    printf("���������:\n");
    printf("%8c %+010.5f\n", ' ', res);

    return 0;
}

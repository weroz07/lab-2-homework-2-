//�2
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int n = 14;// *������*
    int k = 35;// *�������*

    printf("������� ����� %d ���(��), %d �����(�), 00 ������", n, k);

    printf("\n����� � �������: %d �����", n * 60 + k);

    printf("\n�� �������� �������� %d ����� � %d �����", 23 - n, 59 - k);

    printf("\n� 8:00 ������ %d �����", (n - 8) * 60 + k);

    printf("\n���� ���� = %d/24 ����� � ���� ������ = %d/60 �����", n, k);

    return 0;
}
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    
    int x;

    
    printf("������� �����, ������� ��� ������ �� ��������: ");
    scanf_s("%d", &x);

    
    int ezhenedelno = x * 4;

    
    int ostatok = ezhenedelno - x;

    
    int ezhenedelno_nakopleno = ostatok / 3;

    
    int za_god = ezhenedelno_nakopleno * 52;

    // ����� �����������
    printf("--������ ���������� ��� �� ���--\n");
    printf("\n===========================================================");
    printf("\n                        �������: \n");
    printf("\n����� �� ��������: %d ������", x);
    printf("\n�������� ���������� 1/4 �� ������������ �����");
    printf("\n��� ��������� 1/3 �� ������� ����� ������� ���������");
    printf("\n\n                      ������:");
    printf("\n������������ ������: %d * 4 = %d ������", x, ezhenedelno);
    printf("\n������� ����� ���������: %d - %d = %d ������", ezhenedelno, x, ostatok);
    printf("\n������������ ����������: %d / 3 = %d ������", ostatok, ezhenedelno_nakopleno);
    printf("\n���������� �� ���: %d * 52 = %d ������", ezhenedelno_nakopleno, za_god);
    printf("\n\n                    ���������:");
    printf("\n�� ��� ��� ������� %d ������", za_god);

    return 0;
}
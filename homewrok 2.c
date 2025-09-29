#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    
    int x;

    
    printf("¬ведите сумму, которую ёра тратит на сладости: ");
    scanf_s("%d", &x);

    
    int ezhenedelno = x * 4;

    
    int ostatok = ezhenedelno - x;

    
    int ezhenedelno_nakopleno = ostatok / 3;

    
    int za_god = ezhenedelno_nakopleno * 52;

    // вывод результатов
    printf("--–асчет накоплений ёры за год--\n");
    printf("\n===========================================================");
    printf("\n                        ”—Ћќ¬»я: \n");
    printf("\n—умма на сладости: %d рублей", x);
    printf("\n—ладости составл€ют 1/4 от еженедельных денег");
    printf("\nёра сберегает 1/3 от остатка после покупки сладостей");
    printf("\n\n                      –ј—„≈“:");
    printf("\n≈женедельные деньги: %d * 4 = %d рублей", x, ezhenedelno);
    printf("\nќстаток после сладостей: %d - %d = %d рублей", ezhenedelno, x, ostatok);
    printf("\n≈женедельные накоплени€: %d / 3 = %d рублей", ostatok, ezhenedelno_nakopleno);
    printf("\nЌакоплени€ за год: %d * 52 = %d рублей", ezhenedelno_nakopleno, za_god);
    printf("\n\n                    –≈«”Ћ№“ј“:");
    printf("\n«а год ёра накопил %d рублей", za_god);

    return 0;
}
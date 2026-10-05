#include <stdio.h>

int main()
{
    int A, B, C;

    printf("Введите номера игроков A, B и C: ");
    scanf("%d %d %d", &A, &B, &C);

    if ((A + B + C) % 3 == 0)
    {
        printf("Тройка счастливая!\n");
    }
    else
    {
        printf("Тройка не счастливая.\n");
    }

    return 0;
}
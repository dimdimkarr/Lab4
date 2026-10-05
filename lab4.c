#include <stdio.h>

int main()
{
    // Задание 1

    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("char: %c\n", c);
    printf("int: %d\n", i);
    printf("float: %f\n", f);
    printf("double: %e\n", d);

    printf("Введите символ: ");
    scanf(" %c", &c);

    printf("Введите целое число: ");
    scanf("%d", &i);

    printf("Введите число float: ");
    scanf("%f", &f);

    printf("Введите число double: ");
    scanf("%lf", &d);

    printf("\nВведенные значения:\n");
    printf("char: %c\n", c);
    printf("int: %d\n", i);
    printf("float: %.2f\n", f);
    printf("double: %e\n", d);

    // Задание 2

    int a = 11;
    int b = 3;

    int x;
    float y;
    double z;

    x = a / b;
    y = a / b;
    z = a / b;

    printf("\nx = %d\n", x);
    printf("y = %.2f\n", y);
    printf("z = %.2f\n", z);

    printf("(float)a / b = %.4f\n", (float)a / b);
    printf("(double)a / b = %.4f\n", (double)a / b);

    printf("(float)(a / b) = %.4f\n", (float)(a / b));
    printf("(double)(a / b) = %.4f\n", (double)(a / b));

    // Задание 3

    int n;

    printf("\nВведите трехзначное число: ");
    scanf("%d", &n);

    int last_digit = n % 10;
    int first_digit = n / 100;
    int middle_digit = (n / 10) % 10;

    int sum = first_digit + middle_digit + last_digit;

    int reversed = last_digit * 100
                 + middle_digit * 10
                 + first_digit;

    printf("Последняя цифра: %d\n", last_digit);
    printf("Первая цифра: %d\n", first_digit);
    printf("Сумма цифр: %d\n", sum);
    printf("Число наоборот: %d\n", reversed);

    return 0;
}


